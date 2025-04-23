# ���α׷��� �� �������� ����

## 1���� ����: C��� ���� 1

### ���� 1: 0�� �� �� ���� ����
sum=100���� �����ؼ� �Էµ� �� ����, sum=0�̸� ������ ���α׷�
```c
	int n, sum = 100;
	n = 0;

	for (;sum != 0;) { //�Ǵ� while ���...while(sum!=0)
		printf("sum=%d �� �� �Է�: ", sum);
		scanf("%d", &n);
		sum -= n;
	}
	/*if (sum == 0) {//if �� �� �ᵵ�� 
        ����: �ݺ����� ���� ���� ���� �̹� sum=0�̱⶧����*/
	printf("sum=%d", sum);
	
```
<hr>

### ���� 2: 3���� oddsum
for, while, ����Լ��� oddsum����� oddsum1�� �̿��� SUM���ϱ�

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
		//i++�ص� �Ǳ��ϴµ� �׳� +2�ϴ°� �����ϴ�(����ð��� ����)
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
	if (n % 2 == 0) {	// n�� ¦���� n�� Ȧ���� �����
		n -= 1;
	}
	if (n <= 1) { //����Լ�: ���������� ���� �� ��
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
	printf("(3) ��� oddsum3(%d) = %d\n", n, oddsum3(n));
	// SUM �� ���Ѵ�.
	
	for (i = 100 ;i > 0;i -= 2) {
		SUM += oddsum1(i);
	}
	printf("(4) SUM = %d\n", SUM);
}

```
<hr>

### ���� 3: �޷�
1�� 1���� �������̶�� �����ϰ� ���� �Է� �� �� ���� �޷� ���
�� �� ������ ��ĥ�� �������� ���ϰ�, �װ� 7�� ������ ��

```c
void main()
{
	//startday ������ ����ؼ� �տ� ��ĭ�� �������
    int startday, daysum = 0, month;  
	int m[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("��� ���� �Է� : ");
	scanf("%d", &month);

    //���� �� �� �ջ�
	startday = 1;
	for (int i = 0;i < month - 1;i++) {
		daysum += m[i];
	}
	daysum += startday;
	daysum %= 7;
	
    printf("�� �� ȭ �� �� �� ��\n");
    //��¥ ��� �� ��ĭ���...	
    for (int i = 0; i < daysum; i++) {  	
		printf("   ");
	}
    // ���� ���
	for (int i = 1;i <= m[month - 1]; i++) {	
		printf(" %2d", i);	       	
		if ((i + daysum) % 7 == 0)
			printf("\n");
	}

}

```
<hr>

### ���� 4: swap() �Լ� �ۼ�
��������
```c

void swap(int *px, int *py)
{	
	//���� �ּҸ� �ٲ۴�
	int temp = *px;
	*px = *py;  //px�� ����Ű�� ������ ���� py�� ����Ű�� ���� �Ҵ�!
	*py = temp; //py�� ����Ű�� ������ ���� temp�� ���� �Ҵ�
}
void main()
{
	int x = 100, y = 200;

	printf("swap() ȣ�� �� x=%d y=%d\n", x, y);
	swap(&x, &y);
	printf("swap() ȣ�� �� x=%d y=%d\n", x, y);
}

```
<hr>

### ���� 5: �ֹε�Ϲ�ȣ ���ڿ��� ����Ϸ� �ɰ� ���
1922����� 2021���� �������� �ɰ���.(1922��� 2022���� �Ѵ� 22����̴ϱ� �Ⱓ ������)
```c
void main()
{
	int birthy, birthm, birthd;
	char num[7];
	
	while (1) {
		printf("�ֹι�ȣ ���ڸ� : ");
		scanf("%s", num);
        //'0'���� ����: �ƽ�Ű�ڵ� �̿��ؼ� ���� ���� ���Ϸ���
        //ex) '3'=51, '0'=48 ==> '3' - '0' = 51 - 48 = 3...���� ���� ��������
		birthy = (num[0] - '0') * 10 + (num[1] - '0');
		birthm = (num[2] - '0') * 10 + (num[3] - '0');
		birthd = (num[4] - '0') * 10 + (num[5] - '0');

		if (birthy <= 21 && birthy > 9) {
			printf("20%d�� ", birthy);
		}
		else if (birthy <= 9) {
			printf("200%d�� ", birthy);
		}
		else {
			printf("19%d�� ", birthy);
		}
		printf("%d�� %d�ϻ��Դϴ�.\n", birthm, birthd);
	}
	return 0;
}

```
<hr>

### ���� 6: ���ڿ� �Լ� �ٷ��, reverse()�Լ� �ۼ�
��������
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

//(1) �Է�...scanf() ���
	printf("(1) �Է� str1: ");
	scanf("%s", str1);
	printf("    �Է� str2: ");
	scanf("%s", str2);

//(2) ��ȯ �� ���...strcpy ���
	strcpy(temp, str1);
	strcpy(str1, str2);
	strcpy(str2, temp);
        //���
	printf("(2) ��ȯ str1=%s str2=%s \n", str1, str2);
	len1 = strlen(str1);
	len2 = strlen(str2);
	printf("len1=%d len2=%d\n", len1, len2);
	
//(3) ���� �� ���...strcpy ���
	strcpy(str3, str2);
	printf("(3) ���� str3=%s \n", str3);
	
//(4) �̾� ���̱� �� ���...strcat ���
	strcat(str3, " ");
	strcat(str3, str1);
	strcat(str3, " Computer");
	strcat(str3, " Engineering");
	//���
	printf("(4) �̾� ���̱� str3=%s \n", str3);
	len3 = strlen(str3);
	printf("len3=%d\n", len3);
	
//(5) ������ reverse(str4, str3)...str3�� ����� str4������ް� ���
	reverse(str4, str3);
	len4 = strlen(str4);
        //���
	printf("(5) ������ str4=%s \n", str4);
	printf("len4=%d\n", len4);
}

```
<hr>

### ���� 7: ���� �Է¹ް� �� ���� ������ �� y�� ���� �� 2��� z���� ����ϱ�
��������
```c
void main()
{
	int x, y, z;
	y = 0;

	printf("���� x �Է� : ");
	scanf("%d", &x);

	while (x != 0) {
	    y = y * 10 + (x % 10);  //���� �ڸ���: 10���� ���� ������...
		                    //�� �� �ڸ����� �ø������� 10�� ���Ѵ�.
	    x /= 10;		    //x�� 10���� ���� �� -> ������ �����ڸ��� �߷����� ���°� ��
	}
	z = y * 2;
	printf("������ �� y = %d �� ���� 2�� �� z = %d\n", y, z);
}
```
<hr>

### ���� 8: �迭�� ���, ��հ�, �ִ�, �ּ� ���ϴ� �Լ� �ۼ�
��������
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
	printf("��� = %lf\n", compute_avg(arr, 10));
	printf("�ִ� = %d\n", find_max(arr, 10));
	printf("�ּ� = %d\n", find_min(arr, 10));
}

```
<hr>

### ���� 9: �ٰ����� ���δ� �簢���� ���� ���ϱ�
��������
```c
#define N 4
//��ǥ ����ü ����
struct Point {
    int x;
    int y;
};

void print_point(struct Point* p) // ��ǥ�� (1, 1) ������ ����Ѵ�. �ϼ��� ��
{
    printf("(%d, %d)", p->x, p->y);
}

void main()
{
    struct Point p[N] = { {1,2}, {6, 1}, {3,4}, {4,5} };   //��ǥ ����ü �迭 p
    struct Point P1, P2;    //��ǥ ����ü P1, P2
    int area=0; 
    
    //��� �� ���
    for (int i = 0;i < N;i++) 
    {
        print_point(p+i);
    }
    // P1, P2�� ���ϱ�
    P1 = p[0]; P2 = p[0];
    for (int i = 1;i < N;i++) 
    {   
        //�ϴ� �񱳸� ��
        if (P1.x > p[i].x)  P1.x = p[i].x;
        if (P2.x < p[i].x)  P2.x = p[i].x;
        if (P1.y > p[i].y)  P1.y = p[i].y;
        if (P2.y < p[i].y)  P2.y = p[i].y;
       
    }
    printf("\nP1="); print_point(&P1); 
    printf(" P2="); print_point(&P2);
    // ���� ���

    area = (P2.x - P1.x) * (P2.y - P1.y);
    printf("  ����=%d\n", area);
}
```
## 2���� ����: C��� ���� 2

<hr>

### ���� 1: �Ҽ� �Ǵ�
2~100 ������ �Ҽ� ����ϰ� �� ���ϱ�
���� ���õ�?(�Ƹ�)
```c
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) 
{	
	//n=2�϶� �־�� �� �� �˾Ҵµ� �� �־ �� ����...��? 
	for (int i = 2;i <= n / 2;i++){	//� ���� ���� ū ����� ����� 2�� ���������� �̿�...����ð� �����(����)
		if (n % i == 0) {			//�ڱ� �̿� �������� ���� ������(��������: ������ 0�̴�)
			return 0;
		}
	}
	return 1;		
}

void main() // 2 ~ 100 �Ҽ� ã�Ƽ� ����ϰ� ���ϱ�
{
	int n, sum = 0;	//�ǹ̸� �����ϸ� ���� �̸��� ����!...i��� �ϴϱ� �򰥷��� n���� �����ߴ�.
	for (n = 2; n <= 100; n++) {
		// �Ҽ��̸� ����ϰ� ���ϱ�
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

### ���� 2: ������ ���ϱ�
2~10000 ������ ���� �� ���ϰ� ���ϱ���� ���
```c
int main(void)
{
	int n, i, j, sum;
	int ndiv, div[1000]; // ����� ����, ��� ���� ���
	n = 10000;

	for (i = 2; i <= n; i++) {
		sum = 0;  
		ndiv = 0; //�ݺ� ���۸��� �ʱ�ȭ
		
		// ��� Ư: �ִ� i/2��
		for (int j = 1;j <= i / 2;j++) {
			if (i % j == 0) {			//j�� i�� ����̸�
				sum += j;
				div[ndiv] = j;
				ndiv++;
			}
		}
		// i == sum �̸� ������ �̹Ƿ� i�� div[]�� 6 = 1 + 2 + 3 ������ ���	
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

### ���� 3: e^x�� �ٻ�ġ ���ϱ�

�� ���� ������
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
	// for n=1 term > 0.0000001 �� �� ����(0 ���� ���̸� ��Ȯ�� �϶�~)
	for (n = 1;term > 0.0000001;n++) {
		term *= (double)x / n;	//��� ���丮���� ���� �ʿ� ���� term�� �����Ͽ� �������
								//��� �ð��� �����!
		sum += term;			//(x^2/2!) * x/3 = x^3/3!
	}					

	// n�� ������Ű�鼭
	// term =  �� ���Ѵ�.
	// sum = sum + term ���� ���� ���� ���Ѵ�.
	return sum;
}
```
``main``
```c
void main()
{
	int i;
	printf("  exp() : ");	//���� �Լ����� �޴� ��
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
���� 4, 5 input.txt, output.txt �̿��̶� �� �н�
<hr>

### ���� 6: k���� ������ �Է¹ޱ�(malloc)
������ �̿��� �迭 �Է� �� ����, �ִ�, �ּҰ� ���
```c
#include <stdlib.h>
#include <windows.h>

int main()
{
	int i, j, T, K, sum, min, max;
	sum = 0;
	int* data;
	scanf("%d", &T); // �׽�Ʈ ���̽��� �� 3

	for (i = 0; i < T; i++) {
		// ����Ÿ ���� K �� �Է��� �ް�
		scanf("%d", &K);
		// malloc()���� data[] ���� Ȯ��...malloc = memory allocation(�޸� �Ҵ�)
		data = malloc(K * sizeof(int));

		// for j = 0 ~ K-1 ����
		for (j = 0;j < K;j++) {
			// data[j] �Է�
			scanf("%d", &data[j]);
			// sum ����
			sum += data[j];
		}
		max = data[0], min = data[0];
		// max, min �� ã�´�
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
		// sum, max, min �� ����Ѵ�.
		printf("%d %d %d\n", sum, max, min);
		sum = 0;
		// free()�� data ���� ��ȯ
		free(data);
	}
	Sleep(10000);
	return 0;
}

```
<hr>

### ���� 7(acm): ȣ�� ���� �����ϱ�

```c
#include <stdlib.h>
#include <windows.h>

void main()
{//������ �����°� ��Ʈ!

	int T, H, W, N;
	int floor, room;

	scanf("%d", &T);
	for (int i = 0;i < T;i++) {
		floor = 0;
		scanf("%d %d %d", &H, &W, &N);
		if (N > H * W) {
			printf("���� ������ �����ϴ�.");
			continue;
		}

		//���� ���
		if (N % H == 0) {
			floor = H;
		}
		else {
			floor = N % H;
		}
		
		//���ȣ ���
		if (N % H == 0) {
			room = N / H;
		}
		else{
			room = 1 + N / H;
        }	
		printf("%d%02d\n", floor, room);
	}
	Sleep(10000); // 10�ʰ� ����
	return 0;
}
```
## 3���� ����: �ð�, ���� �ð�
<time.h>�� ���Ե� �Լ�, ����ü ����

```c
//time_t : �ý����� ���� �ð��� �����´�. (1970�� ���� 1�� ������ ���� ��)
//time_t time(time_t *timer);
//timer : �ð��� ����� �������� ��ġ
//��ȯ�� : 1970�� 1�� 1�Ϻ��� ����� �ð��� �����ش�.
//ctime : UTC�� �ð��� ���� ����(�츮���� ǥ�ؽð�)�� �°� �ð��� �ٲپ� �ش�. 
//char *ctime(const time_t *timer);
//timer : �ð��� ����� ������
// struct tm *localtime(const time_t *timer) : ����ð�
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

### ���� 1: ���� �ð�
```c
#include <time.h>
int main()
{
	time_t now;
	struct tm* tp;
	char* weeks[] = { "��", "��", "ȭ", "��", "��", "��", "��" }; //�Ͽ����� 0...

	now = time(NULL); //time(&now); //
	//now = 0; //���� �ʱ� �ð�!
	//printf("ctime() : %s", ctime(&now));	//ctime=char time...

	tp = localtime(&now);	//�߶��ش�
	printf("now = %d\n", now);
	printf("%d�� %d�� %d�� %s���� %d�� %d�� %d��\n",
		tp->tm_year + 1900/*+1900�� �ؾ� ������ �⵵�� ��*/,
		tp->tm_mon + 1/*1���� 0���̶�� �����صξ���...+1�������*/,
		tp->tm_mday, weeks[tp->tm_wday], tp->tm_hour, tp->tm_min, tp->tm_sec);
	return 0;
}
```
<hr>

### ���� 2: �����̴� �ð�
```c
#include <time.h>

void  main()
{
	time_t now;
	struct tm* tp;
	char* weeks[] = { "��", "��", "ȭ", "��", "��", "��", "��" };
	while (1) {
		now = time(NULL);
		//printf("����ð� : %s", ctime(&now));
		//printf("%d\r", time(NULL));	// '\r'?
		tp = localtime(&now);
		printf("%d�� %d�� %d�� %s���� %d�� %d�� %d��\r",	// '\r': ĳ���� ����...Ŀ���� ���� �� ������ �̵�, '\n': ���� �ǵ�
			tp->tm_year + 1900, tp->tm_mon + 1, tp->tm_mday,
			weeks[tp->tm_wday], tp->tm_hour, tp->tm_min, tp->tm_sec);
	}
	return 0;
}

```
<hr>

### ���� 3: ���� �ð� ����
```c
#include <time.h> 
void main(void)
{
	clock_t start, finish;
	double duration = 0.;
	int i, j, k = 0;
	printf("2491040 ������\n");
	start = clock();
	// ����ð��� �����ϰ��� �ϴ� �ڵ�.... 
	for (i = 1; i <= 10000; i++)
		for (j = 1; j <= 10000; j++)
			k++;
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC; //1000���� ������
	printf("%lf ���Դϴ�.\n", duration);
}

```
<hr>

### ���� 4
��������
```c
```
<hr>

### ���� 5
��������
```c
```
<hr>

### ���� 6
��������
```c
```
<hr>

### ���� 7(acm):
��������
```c
```

## 4���� ����: ����Լ�

<hr>

### ���� n
��������
```c
```
## 5���� ����: ����Լ�

<hr>

### ���� n
��������
```c
```
## 6���� ����: ����Լ�

<hr>

### ���� n
��������
```c
```