# 프로그래밍 랩 과제파일 정리

## 1주차 과제: C언어 복습 1

### 문제 1: 0이 될 때 까지 빼기
sum=100으로 시작해서 입력된 수 빼기, sum=0이면 끝나는 프로그램
```c
	int n, sum = 100;
	n = 0;

	for (;sum != 0;) { //또는 while 사용...while(sum!=0)
		printf("sum=%d 뺄 값 입력: ", sum);
		scanf("%d", &n);
		sum -= n;
	}
	/*if (sum == 0) {//if 꼭 안 써도됨 
        이유: 반복에서 빠져 나온 순간 이미 sum=0이기때문에*/
	printf("sum=%d", sum);
	
```
<hr>

### 문제 2: 3가지 oddsum
for, while, 재귀함수로 oddsum만들고 oddsum1을 이용해 SUM구하기

```c
int oddsum1(int n)
{
	int i;
	int sum = 0;
	if (n % 2 == 0) {
		n -= 1;
	}
	for (i = n;i > 0;i -= 2) {
		sum += i;
		//i++해도 되긴하는데 그냥 +2하는게 간단하다(실행시간이 절반)
	}
	return sum;
}

int oddsum2(int n)
{
	if (n % 2 == 0) {
		n -= 1;
	}
	int i = n;
	int sum = 0;
	while (i >0) {
		sum += i;
		i -= 2;
	}
	return sum;
}
int oddsum3(int n)
{
	if (n % 2 == 0) {	// n이 짝수면 n을 홀수로 만든다
		n -= 1;
	}
	if (n <= 1) { //재귀함수: 끝나는조건 먼저 쓸 것
		return 1;
	}
	else {

		return n + oddsum3(n - 2);
	}

}
void main()
{
	int n = 100;
	int SUM = 0;
	int i;
	printf("(1) for oddsum1(%d) = %d\n", n, oddsum1(n));
	printf("(2) while oddsum2(%d) = %d\n", n, oddsum2(n));
	printf("(3) 재귀 oddsum3(%d) = %d\n", n, oddsum3(n));
	// SUM 을 구한다.
	
	for (i = 100 ;i > 0;i -= 2) {
		SUM += oddsum1(i);
	}
	printf("(4) SUM = %d\n", SUM);
}

```
<hr>

### 문제 3: 달력
1월 1일이 월요일이라고 가정하고 월을 입력 시 그 달의 달력 출력
그 달 전까지 며칠이 지났는지 구하고, 그걸 7로 나누면 됨

```c
void main()
{
	//startday 변수를 사용해서 앞에 빈칸을 출력하자
    int startday, daysum = 0, month;  
	int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("출력 월을 입력 : ");
	scanf("%d", &month);

    //지난 일 수 합산
	startday = 1;
	for (int i = 0;i < month - 1;i++) {
		daysum += m[i];
	}
	daysum += startday;
	daysum %= 7;
	
    printf("일 월 화 수 목 금 토\n");
    //날짜 출력 전 빈칸출력...	
    for (int i = 0; i < daysum; i++) {  	
		printf("   ");
	}
    // 일자 출력
	for (int i = 1;i <= m[month - 1]; i++) {	
		printf(" %2d", i);	       	
		if ((i + daysum) % 7 == 0)
			printf("\n");
	}

}

```
<hr>

### 문제 4: swap() 함수 작성
문제내용
```c

void swap(int *px, int *py)
{	
	//서로 주소를 바꾼다
	int temp = *px;
	*px = *py;  //px가 가르키는 곳으로 가서 py가 가르키는 값을 할당!
	*py = temp; //py가 가르키는 곳으로 가서 temp의 값을 할당
}
void main()
{
	int x = 100, y = 200;

	printf("swap() 호출 전 x=%d y=%d\n", x, y);
	swap(&x, &y);
	printf("swap() 호출 후 x=%d y=%d\n", x, y);
}

```
<hr>

### 문제 5: 주민등록번호 문자열을 년월일로 쪼개 출력
1922년부터 2021까지 기준으로 쪼개자.(1922년과 2022년은 둘다 22년생이니까 기간 설정함)
```c
void main()
{
	int birthy, birthm, birthd;
	char num[7];
	
	while (1) {
		printf("주민번호 앞자리 : ");
		scanf("%s", num);
        //'0'빼는 이유: 아스키코드 이용해서 실제 숫자 구하려고
        //ex) '3'=51, '0'=48 ==> '3' - '0' = 51 - 48 = 3...실제 숫자 구해짐짐
		birthy = (num[0] - '0') * 10 + (num[1] - '0');
		birthm = (num[2] - '0') * 10 + (num[3] - '0');
		birthd = (num[4] - '0') * 10 + (num[5] - '0');

		if (birthy <= 21 && birthy > 9) {
			printf("20%d년 ", birthy);
		}
		else if (birthy <= 9) {
			printf("200%d년 ", birthy);
		}
		else {
			printf("19%d년 ", birthy);
		}
		printf("%d월 %d일생입니다.\n", birthm, birthd);
	}
	return 0;
}

```
<hr>

### 문제 6: 문자열 함수 다루기, reverse()함수 작성
문제내용
```c
#include <string.h>
void reverse(char r_str[], char str[]) 
{
	int len = strlen(str);
	for (int i = 0;i < len;i++) {
		r_str[i] = str[len - 1 - i];
	}
	r_str[len] = '\0';

}

void main()
{
	char str1[100];
	char str2[100];
	char str3[200];
	char str4[100];
	char temp[100];
	int len1, len2, len3, len4;

//(1) 입력...scanf() 사용
	printf("(1) 입력 str1: ");
	scanf("%s", str1);
	printf("    입력 str2: ");
	scanf("%s", str2);

//(2) 교환 후 출력...strcpy 사용
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
        //출력
	printf("(2) 교환 str1=%s str2=%s \n", str1, str2);
	len1 = strlen(str1);
	len2 = strlen(str2);
	printf("len1=%d len2=%d\n", len1, len2);
	
//(3) 복사 후 출력...strcpy 사용
	strcpy(str3, str2);
	printf("(3) 복사 str3=%s \n", str3);
	
//(4) 이어 붙이기 후 출력...strcat 사용
	strcat(str3, " ");
	strcat(str3, str1);
	strcat(str3, " Computer");
	strcat(str3, " Engineering");
	//출력
	printf("(4) 이어 붙이기 str3=%s \n", str3);
	len3 = strlen(str3);
	printf("len3=%d\n", len3);
	
//(5) 뒤집기 reverse(str4, str3)...str3을 뒤집어서 str4에저장받고 출력
	reverse(str4, str3);
	len4 = strlen(str4);
        //출력
	printf("(5) 뒤집기 str4=%s \n", str4);
	printf("len4=%d\n", len4);
}

```
<hr>

### 문제 7: 정수 입력받고 그 수를 뒤집은 수 y를 구한 뒤 2배수 z까지 출력하기
문제내용
```c
void main()
{
	int x, y, z;
	y = 0;

	printf("정수 x 입력 : ");
	scanf("%d", &x);

	while (x != 0) {
	    y = y * 10 + (x % 10);  //일의 자리수: 10으로 나눈 나머지...
		                    //그 후 자리수를 올리기위해 10을 곱한다.
	    x /= 10;		    //x를 10으로 나눈 몫 -> 기존의 일의자리가 잘려나간 형태가 됨
	}
	z = y * 2;
	printf("뒤집은 수 y = %d 그 수의 2배 수 z = %d\n", y, z);
}
```
<hr>

### 문제 8: 배열의 출력, 평균값, 최대, 최소 구하는 함수 작성
문제내용
```c
void print_array(int arr[], int n)
{
	for (int i = 0; i < n;i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}

double compute_avg(int arr[], int n)
{
	double sum = 0;
	for (int i = 0; i < n;i++) {
		sum += arr[i];
	}
	return sum / n;
}

int find_max(int arr[], int n)
{
	int Max = arr[0];
	for (int i = 0;i < n;i++) {
		if (Max < arr[i]) {
			Max = arr[i];
		}
		else {
			continue;
		}
	}
	return Max;
}

int find_min(int arr[], int n)
{
	int Min = arr[0];
	for (int i = 0;i < n;i++) {
		if (Min > arr[i]) {
			Min = arr[i];
		}
		else {
			continue;
		}
	}

	return Min;
	
}
void main() {
	int arr[10] = { 12, 30, 5, 20, 44, 3, 100, 88, 9, 101 };

	print_array(arr, 10);
	printf("평균 = %lf\n", compute_avg(arr, 10));
	printf("최대 = %d\n", find_max(arr, 10));
	printf("최소 = %d\n", find_min(arr, 10));
}

```
<hr>

### 문제 9: 다각형을 감싸는 사각형의 면적 구하기
ㅈㄱㄴㄴ
```c
#define N 4
//좌표 구조체 정의
struct Point {
    int x;
    int y;
};

void print_point(struct Point* p) // 좌표를 (1, 1) 식으로 출력한다. 완성할 것
{
    printf("(%d, %d)", p->x, p->y);
}

void main()
{
    struct Point p[N] = { {1,2}, {6, 1}, {3,4}, {4,5} };   //좌표 구조체 배열 p
    struct Point P1, P2;    //좌표 구조체 P1, P2
    int area=0; 
    
    //모든 점 출력
    for (int i = 0;i < N;i++) 
    {
        print_point(p+i);
    }
    // P1, P2를 구하기
    P1 = p[0]; P2 = p[0];
    for (int i = 1;i < N;i++) 
    {   
        //일단 비교를 함
        if (P1.x > p[i].x)  P1.x = p[i].x;
        if (P2.x < p[i].x)  P2.x = p[i].x;
        if (P1.y > p[i].y)  P1.y = p[i].y;
        if (P2.y < p[i].y)  P2.y = p[i].y;
       
    }
    printf("\nP1="); print_point(&P1); 
    printf(" P2="); print_point(&P2);
    // 면적 계산

    area = (P2.x - P1.x) * (P2.y - P1.y);
    printf("  면적=%d\n", area);
}
```
## 2주차 과제: C언어 복습 2

<hr>

### 문제 1: 소수 판단
2~100 사이의 소수 출력하고 합 구하기
시험 나올듯?(아마)
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) 
{	
	//n=2일때 넣어야 할 줄 알았는데 안 넣어도 됨 유의...왜? 
	for (int i = 2;i <= n / 2;i++){	//어떤 수의 가장 큰 약수는 어떤수를 2로 나눈값임을 이용...실행시간 절약됨(절반)
		if (n % i == 0) {			//자기 이외 나눠지는 수가 있으면(나눠진다: 나머지 0이다)
			return 0;
		}
	}
	return 1;		
}

void main() // 2 ~ 100 소수 찾아서 출력하고 더하기
{
	int n, sum = 0;	//의미를 생각하며 변수 이름을 짓자!...i라고 하니까 헷갈려서 n으로 변경했다.
	for (n = 2; n <= 100; n++) {
		// 소수이면 출력하고 더하기
		if (isPrime(n) == 1) {
			printf("%d ", n);
			sum += n;
		}
	}
	printf("\n");
	printf("sum=%d\n", sum);
}

```

<hr>

### 문제 2: 완전수 구하기
2~10000 사이의 완전 수 구하고 더하기까지 출력
```c
int main(void)
{
	int n, i, j, sum;
	int ndiv, div[1000]; // 약수의 개수, 약수 보관 장소
	n = 10000;

	for (i = 2; i <= n; i++) {
		sum = 0;  
		ndiv = 0; //반복 시작마다 초기화
		
		// 약수 특: 최대 i/2임
		for (int j = 1;j <= i / 2;j++) {
			if (i % j == 0) {			//j가 i의 약수이면
				sum += j;
				div[ndiv] = j;
				ndiv++;
			}
		}
		// i == sum 이면 완전수 이므로 i와 div[]를 6 = 1 + 2 + 3 식으로 출력	
		if (i == sum) {
			printf("%d = ", i);
			for (int k = 0;k < ndiv;k++) {
				printf("%d", div[k]);
				if (k != ndiv - 1) {
					printf(" + ");
				}
				else {
					printf("\n");
				}
			}
		}
	}
	return 0;
}

```

<hr>

### 문제 3: e^x의 근사치 구하기

걍 보고 ㄱㄱㄱ
``myexp``
```c
#include <math.h>
double myexp(int x)
{
	int n;
	double term, sum, oldsum;
	oldsum = 0.0;
	sum = 1.0;
	term = 1.0;
	// for n=1 term > 0.0000001 일 때 까지(0 개수 줄이면 정확도 하락~)
	for (n = 1;term > 0.0000001;n++) {
		term *= (double)x / n;	//계속 팩토리얼값을 구할 필요 없이 term을 누적하여 계산하자
								//계산 시간이 단축됨!
		sum += term;			//(x^2/2!) * x/3 = x^3/3!
	}					

	// n를 증가시키면서
	// term =  을 구한다.
	// sum = sum + term 으로 누적 값을 구한다.
	return sum;
}
```
``main``
```c
void main()
{
	int i;
	printf("  exp() : ");	//기존 함수에서 받는 값
	for (i = 1; i <= 5; i++)
		printf("%lf ", exp((double)i));
	printf("\n");
	printf("myexp() : ");
	for (i = 1; i <= 5; i++)
		printf("%lf ", myexp(i));
	printf("\n");
}
```
<hr>
문제 4, 5 input.txt, output.txt 이용이라 걍 패스
<hr>

### 문제 6: k개의 데이터 입력받기(malloc)
파일을 이용한 배열 입력 후 총점, 최대, 최소값 출력
```c
#include <stdlib.h>
#include <windows.h>

int main()
{
	int i, j, T, K, sum, min, max;
	sum = 0;
	int* data;
	scanf("%d", &T); // 테스트 케이스의 수 3

	for (i = 0; i < T; i++) {
		// 데이타 갯수 K 를 입력을 받고
		scanf("%d", &K);
		// malloc()으로 data[] 공간 확보...malloc = memory allocation(메모리 할당)
		data = malloc(K * sizeof(int));

		// for j = 0 ~ K-1 까지
		for (j = 0;j < K;j++) {
			// data[j] 입력
			scanf("%d", &data[j]);
			// sum 누적
			sum += data[j];
		}
		max = data[0], min = data[0];
		// max, min 을 찾는다
		for (j = 1;j < K;j++) {
			if (data[j] > max) {
				max = data[j];
			}
			else
				continue;

			if (data[j] < min) {
				min = data[j];
			}
		}
		// sum, max, min 을 출력한다.
		printf("%d %d %d\n", sum, max, min);
		sum = 0;
		// free()로 data 공간 반환
		free(data);
	}
	Sleep(10000);
	return 0;
}

```
<hr>

### 문제 7(acm): 호텔 객실 배정하기

```c
#include <stdlib.h>
#include <windows.h>

void main()
{//층수로 나누는게 힌트!

	int T, H, W, N;
	int floor, room;

	scanf("%d", &T);
	for (int i = 0;i < T;i++) {
		floor = 0;
		scanf("%d %d %d", &H, &W, &N);
		if (N > H * W) {
			printf("남는 객실이 없습니다.");
			continue;
		}

		//층수 출력
		if (N % H == 0) {
			floor = H;
		}
		else {
			floor = N % H;
		}
		
		//방번호 출력
		if (N % H == 0) {
			room = N / H;
		}
		else{
			room = 1 + N / H;
        }	
		printf("%d%02d\n", floor, room);
	}
	Sleep(10000); // 10초간 정지
	return 0;
}
```
## 3주차 과제: 시계, 실행 시간
<time.h>에 포함된 함수, 구조체 설명

```c
//time_t : 시스템의 현재 시간을 가져온다. (1970년 기준 1초 단위로 증가 값)
//time_t time(time_t *timer);
//timer : 시간이 저장된 포인터의 위치
//반환값 : 1970년 1월 1일부터 경과한 시간을 돌려준다.
//ctime : UTC로 시간을 지역 설정(우리나라 표준시간)에 맞게 시간을 바꾸어 준다. 
//char *ctime(const time_t *timer);
//timer : 시간이 저장된 포인터
// struct tm *localtime(const time_t *timer) : 현재시간
//struct tm { /* a broken-down time */
//int tm_sec; /* seconds after the minute: [0 - 60] */
//int tm_min; /* minutes after the hour: [0 - 59] */
//int tm_hour; /* hours after midnight: [0 - 23] */
//int tm_mday; /* day of the month: [1 - 31] */
//int tm_mon; /* months since January: [0 - 11] */
//int tm_year; /* years since 1900 */
//int tm_wday; /* days since Sunday: [0 - 6] */
//int tm_yday; /* days since January 1: [0 - 365] */
//int tm_isdst; /* daylight saving time flag: <0, 0, >0 */
//};
```
<hr>

### 문제 1: 현재 시간
```c
#include <time.h>
int main()
{
	time_t now;
	struct tm* tp;
	char* weeks[] = { "일", "월", "화", "수", "목", "금", "토" }; //일요일이 0...

	now = time(NULL); //time(&now); //
	//now = 0; //완전 초기 시간!
	//printf("ctime() : %s", ctime(&now));	//ctime=char time...

	tp = localtime(&now);	//잘라준다
	printf("now = %d\n", now);
	printf("%d년 %d월 %d일 %s요일 %d시 %d분 %d초\n",
		tp->tm_year + 1900/*+1900을 해야 현재의 년도가 됨*/,
		tp->tm_mon + 1/*1월을 0월이라고 저장해두었음...+1해줘야함*/,
		tp->tm_mday, weeks[tp->tm_wday], tp->tm_hour, tp->tm_min, tp->tm_sec);
	return 0;
}
```
<hr>

### 문제 2: 움직이는 시계
```c
#include <time.h>

void  main()
{
	time_t now;
	struct tm* tp;
	char* weeks[] = { "일", "월", "화", "수", "목", "금", "토" };
	while (1) {
		now = time(NULL);
		//printf("현재시간 : %s", ctime(&now));
		//printf("%d\r", time(NULL));	// '\r'?
		tp = localtime(&now);
		printf("%d년 %d월 %d일 %s요일 %d시 %d분 %d초\r",	// '\r': 캐리지 리턴...커서를 줄의 맨 앞으로 이동, '\n': 라인 피드
			tp->tm_year + 1900, tp->tm_mon + 1, tp->tm_mday,
			weeks[tp->tm_wday], tp->tm_hour, tp->tm_min, tp->tm_sec);
	}
	return 0;
}

```
<hr>

### 문제 3: 실행 시간 측정
```c
#include <time.h> 
void main(void)
{
	clock_t start, finish;
	double duration = 0.;
	int i, j, k = 0;
	printf("2491040 강주현\n");
	start = clock();
	// 수행시간을 측정하고자 하는 코드.... 
	for (i = 1; i <= 10000; i++)
		for (j = 1; j <= 10000; j++)
			k++;
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC; //1000으로 나눈다
	printf("%lf 초입니다.\n", duration);
}

```
<hr>

### 문제 4
문제내용
```c
```
<hr>

### 문제 5
문제내용
```c
```
<hr>

### 문제 6
문제내용
```c
```
<hr>

### 문제 7(acm):
문제내용
```c
```

## 4주차 과제: 재귀함수

<hr>

### 문제 n
문제내용
```c
```
## 5주차 과제: 재귀함수

<hr>

### 문제 n
문제내용
```c
```
## 6주차 과제: 재귀함수

<hr>

### 문제 n
문제내용
```c
```