// quiz5-3
// 2~10000 수 중에 피보나치 수 이면서 동시에 솟수인 수 찾기
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) {	//소수 판별 함수
	if (n == 2) {
		return 1;
	}
	for (int i = 2; i < n; i++) { //2부터 시작해서 n이하의 수로 나눠본다,,,
		if (n % i == 0)			//나누어 떨어지면 소수가 아님
			return 0;			
	}
	return 1;	//다 나눠봤는데 없으면 소수!!!!!!!!!!!!!!!!!!!!!!!!!!!!
}

int fibo(int n) {	//피보나치 판별 함수
	int f0 = 1, f1 = 1, f2 = 2;
	if (n <= 1) {	//n이 1보다 작으면
		return n;	//n을 리턴(왜냐면...초기항이니까...^^)
	}
	else if (n == 2) {	//n이 2면
		return 2;		//2를 리턴
	}
	return fibo(n - 1) + fibo(n - 2);	
}

void main()
{
	int f0 = 1, f1 = 1, f2 = 2, sum = 0;
	// f2 <= 1000000 에 대하여 
		// f2 가 솟수이면 출력하고 sum 에 더한다. 
		// f0, f1, f2를 다시 계산한다. 재귀함수를 사용하지 않는다.
	// sum을 출력한다.
	//첫번째 방법 (추천)
	while (f2 <= 1000000) {
		if (isPrime(f2)) {
			printf("%d ", f2);
			sum += f2;
		}
		f0 = f1;
		f1 = f2;
		f2 = f0 + f2;
	}

	//두번째 방법: fibo를 이용
	//개념적으로는 맞으나 시간이 꽤 오래 걸림...
	/*int i;
	for (i = 2; fibo(i) <= 1000000; i++) {
		if (isPrime(fibo(i)) == 1) {
			printf("%d ", fibo(i));
			sum += fibo(i);
		}
	}*/
	printf(" += %d\n", sum);
	//시험문제: 시간 제한 있을 수 있음...
	//자료구조->재귀함수?
}