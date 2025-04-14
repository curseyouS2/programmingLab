// 프로그래밍랩 6주
// Lab6-3 구조체 선언과 입 출력
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // 이름 찾기 위해 필요
typedef struct student {
	char name[20];
	int year;
	char no[20];
	char phone[20];
} Student;

void PrintStudent(Student *s)
{

}
void InputStudent(Student *s)
{

}

void main(void)
{
	int i, count, found;
	char name[20]; // 찾을 이름 입력 용
	Student *data;
	printf("몇명 : ");
	scanf("%d", &count);
	data = (Student *)malloc(count*sizeof(Student)); // 완성할것
	for (i=0;i<count;i++) { 
		// 입력 부분 완성
		printf("\n자료번호 %d 입력\n", i+1);
		InputStudent(&data[i]); // 완성할것
	}
	for (i=0;i<count;i++) // 출력
		PrintStudent(&data[i]);

	printf("찾을 이름: ");
	scanf("%s", name); // 이름 입력
	found = 0;
	for (i=0;i<count;i++) { // 자료 찾기
		// 같은 이름을 찾아서 맞으면  break
		if () // 찾으면 break
			break;
	}
	if (i<count) // 찾았다.
		PrintStudent( );
	else
		printf("찾는 데이타가 없습니다.\n");
}