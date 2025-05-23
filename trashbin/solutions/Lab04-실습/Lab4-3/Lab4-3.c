//  1학기 프로그래밍랩 
// Lab 4-3 Hanoi tower 중간과정 출력
#include <stdio.h>

// 탑에 저장된 원판의 수와 어떤 원판이 있는지 보관하는 변수

// 초기 조건 
// A 에 4,3,2,1 이 있다면
// 탑에 몇개의 원판이 있는지 저장 : nplates[0] = 4
// 탑의 현재 상태 tower[0][0 ~ 3] => 4, 3, 2, 1

// 1 이 B 로 움직였다면
// nplates[0] = 3, nplates[1] = 1
// tower[0][0 ~ 2] = 4, 3, 2
// tower[1][0] = 1

int nplates[3]; // 탑에 몇개의 원판이 있는지
int tower[3][100]; // 어떤 원판들이 있는지 보관 ABC

// 탑의 현재 상태를 표시한다.
void print_tower()
{
	int i; // tower 번호
	int j;
	// tower[][] 내용을 보여준다
	for (i = 0;i < 3;i++) {
		switch (i) {
		case 0:
			printf("A : ");
			break;
		case 1:
			printf("B : ");
			break;
		case 2:
			printf("C : ");
			break;
		}
		for (j = 0;j < nplates[i];j++) {	//원판 번호 출력할거임
			/*if (nplates[i] == 0) {	//만약에 원판 없으면
				if (tower[i][j] == 0) {
					break;
				}
				break;
			}
			else {
				printf("%d ", tower[i][j]);
			}*/
			printf("%d ", tower[i][j]);
		}
		printf("\n");
	}

	printf("\n");
	printf("다음 Enter : ");
	getchar(); // 쉬프트 입력 받기
	fflush(stdin);
}

// 하나의 원판을 이동할 때 마다 전체 탑의 현재 상태를 변경한다.
void move_one(int n, char from, char to)
{
	printf("\n원판 %d을 %c에서 %c로 옮긴다.\n", n, from, to);
	// nplates[] 와 tower[][] 내용을 수정한다
	// from 에서는 제일 위의 원판을 빼고
	// to 에는 제일 끝에 원판을 추가하고
	// nplates[] 값을 감소/증가 한다.
	// 이동이 발생할 때 마다 print_tower() 호출
	if (from == 'A') {
		nplates[0]--;
		if (to == 'B') {
			nplates[1]++;	//b원판개수 추가
			tower[1][nplates[1] - 1] = n;	//b에 
		}
		else {	//C
			nplates[2]++;
			tower[2][nplates[2] - 1] = n;
		}
	}
	if (from == 'B') {
		nplates[1]--;
		if (to == 'A') {
			nplates[0]++;
			tower[0][nplates[0] - 1] = n;
		}
		else {	//C
			nplates[2]++;
			tower[2][nplates[2] - 1] = n;
		}
	}
	if (from == 'C') {
		nplates[2]--;
		if (to == 'A') {
			nplates[0]++;
			tower[0][nplates[0] - 1] = n;
		}
		else {	//B
			nplates[1]++;
			tower[1][nplates[1] - 1] = n;
		}
	}
	print_tower();

}

// 타워내용을 초기화 한다.
void init_tower(int n, char start)
{
	int i, tower_no;
	//탑의 번호 A, B, C -> 0, 1, 2
	tower_no = start - 'A';
	// tower[][] 내용과 nplates[]를 초기화 한다.
	// tower[0][0]~[0][3] = 4, 3, 2, 1 식으로
	// nplates[] 에 원판의 수를 기억시킨다..
	for (i = 0;i < n;i++) {
		tower[0][i] = 4 - i;
	}
	nplates[0] = n;
	nplates[1] = 0;
	nplates[2] = 0;
}

void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1)
		move_one(1, from, to); // 제일 위에 있는 1번 원판을 이동

	else {
		hanoi_tower(n - 1, from, to, tmp); // 1 ~ n-1 을 임시 장소에 이동
		move_one(n, from, to); // 제일 밑에 있는 원판을 이동
		hanoi_tower(n - 1, tmp, from, to); // 1 ~ n-1 을 임시 장소에서 목적지로 이동
	}
}

void main()
{
	printf("2491040 강주현\n");
	init_tower(4, 'A'); // 초기 조건, 1~4 원판이 A 에 있다.
	printf("초기 상태\n");
	print_tower();
	hanoi_tower(4, 'A', 'B', 'C');
	printf("\n끝!\n");
}