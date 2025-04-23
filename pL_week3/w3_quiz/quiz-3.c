#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) {
	for (int i = n / 2;i >= 2;i--) {
		if (n % i == 0) {
			return 0;
		}
	}
	return 1;
}
int main()
{
	printf("quiz 3번\n");
	//내림 차순으로 찾을것...(큰 수 찾는거니깐...그게 효율적임)
	//소수 판단 함수 작성할것...
	int T, n, i, k;
	printf("A분반 2491040 강주현\n");

	scanf("%d", &T);
	while (T--) {
		scanf("%d", &n);
		for (i = n;i >= 2
			;i--) {
			if (isPrime(i)) {
				printf("%d\n", i);
				break;
			} 
		}
	}
	return 0;
}