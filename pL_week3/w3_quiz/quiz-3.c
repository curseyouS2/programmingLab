#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

isPrime(int n) {

}


int main()
{
	printf("quiz 3��\n");
	//���� �������� ã����...(ū �� ã�°Ŵϱ�...�װ� ȿ������)
	//�Ҽ� �Ǵ� �Լ� �ۼ��Ұ�...
	//while(T--)�Ǵ� for�� ���
	
	int T, n, i, k;
	printf("�й� �й� �̸�\n");
	// T �Է�
	// T Ƚ�� ��ŭ
		// n �Է�
		// k<=n�� �ڼ��� �ִ밪�� ���Ѵ�.
		// ��� k ���

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