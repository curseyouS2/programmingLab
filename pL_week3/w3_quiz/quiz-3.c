#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

isPrime(int n) {

}


int main()
{
	printf("quiz 3번\n");
	//내림 차순으로 찾을것...(큰 수 찾는거니깐...그게 효율적임)
	//소수 판단 함수 작성할것...
	//while(T--)또는 for문 사용
	
	int T, n, i, k;
	printf("분반 학번 이름\n");
	// T 입력
	// T 횟수 만큼
		// n 입력
		// k<=n인 솟수의 최대값을 구한다.
		// 결과 k 출력

	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		for (i = n;i >= 2;i--) {
			if (isPrime(i) == 1) {
				printf("%d\n", i);
				break;
			} 
		}
	}


	return 0;
}