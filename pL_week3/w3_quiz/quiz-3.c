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
	printf("quiz 3��\n");
	//���� �������� ã����...(ū �� ã�°Ŵϱ�...�װ� ȿ������)
	//�Ҽ� �Ǵ� �Լ� �ۼ��Ұ�...
	int T, n, i, k;
	printf("A�й� 2491040 ������\n");

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