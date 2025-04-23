#include <stdio.h>


int find_max_fibo(int n)
{
	int a = 0, b = 1, c = 1;
	if (n == 1) {
		return 1;
	}
	if (n == 2) {
		return 2;
	}
	while (c <= n) {
		a = b;
		b = c;
		c = a + b;
	}
	return b;
}

void find_fibos(int n)
{	
	if (n == 0) {
		return;
	}
	int f = find_max_fibo(n);
	find_fibos(n - f);
	printf("%d ", f);
	
}
void main()
{
	int n_tests;
	int n, max_fibo;
	scanf("%d", &n_tests);
	while (n_tests--) {
		scanf("%d", &n);
		find_fibos(n);
		printf("\n");
	}

}

