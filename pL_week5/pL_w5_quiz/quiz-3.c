// quiz5-3
// 2~10000 �� �߿� �Ǻ���ġ �� �̸鼭 ���ÿ� �ڼ��� �� ã��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int isPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n % i == 0)
			return 0;
		else
			return 1;
	}
}
int fibo(int n) {
	int f0 = 1, f1 = 1, f2 = 2;
	if (n <= 1) {
		return n;
	}
	else if (n == 2) {
		return 2;
	}
	return fibo(n - 1) + fibo(n - 2);
}


void main()
{
	int f0 = 1, f1 = 1, f2 = 2, sum = 0;
	// f2 <= 1000000 �� ���Ͽ� 
		// f2 �� �ڼ��̸� ����ϰ� sum �� ���Ѵ�. 
		// f0, f1, f2�� �ٽ� ����Ѵ�. ����Լ��� ������� �ʴ´�.
	// sum�� ����Ѵ�.
	//ù��° ��� (��õ)
	while (f2 <= 1000000) {
		if (isPrime(f2) == 1) {
			printf("%d", f2);
			sum += f2;
		}
		f0 = f1;
		f1 = f2;
		f2 = f0 + f2;
	}

	//�ι�° ���: fibo�� �̿�
	//���������δ� ������ �ð��� �� ���� �ɸ�...
	int i;
	for (i = 2; fibo(i) <= 1000000; i++) {
		if (isPrime(fibo(i)) == 1) {
			printf("%d ", fibo(i));
			sum += fibo(i);
		}
	}
	printf(" += %d\n", sum);
	//���蹮��: �ð� ���� ���� �� ����...
	//�ڷᱸ��->����Լ�?
}
