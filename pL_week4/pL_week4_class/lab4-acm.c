#include <stdio.h>
//피보나치 수...0 1 1 2 3 5 8...
//100을 구한다 치자...
/*그럼 일단 100이하의 가장 큰 피보나치 수를 구한다...f
그걸 100에서 빼고 나서 다시 또 구한다...
...반복.*/
//ppt 참조...
//큰 수를 넣었을 때 오래 걸리면 안됨...(out of time)
//퀴즈 2번이랑 비슷함
int find_max_fibo(int n)
{//findmaxfibo를 이용하여 최대 피보나치 수 찾는다
//n-f가 0이 아니면 다시 실행.


}

void find_fibos(int n)
{
	//재귀함수...출력.
}

void main()
{
	int n_tests;
	int n, max_fibo;
	scanf("%d", &n_tests);
	while (n_tests--) {
		scanf("%d", &n);
		find_fibos(n); //f 찾기
		printf("\n");
	}

}

