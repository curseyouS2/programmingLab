/ quiz - 2
#include <stdio.h>
// 정수를 뒤집어서 출력하는 재귀함수
void print_rev_int(int n)
{
	// 10 미만이면 출력하고 return
	// 10 이상이면
	//    제일 끝을 출력하고
	//    위쪽을 뒤집어서 출력 (재귀함수 호출)

	if (n < 10) {
		printf("%d", n);
	}else if(n>=10){
		printf("%d", n % 10);
		return print_rev_int(n / 10);
}

void main()
{
	print_rev_int(1234567);
	printf("\n");
	print_rev_int(1204560);
	printf("\n");
