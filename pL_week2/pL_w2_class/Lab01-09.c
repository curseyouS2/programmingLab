// Lab01-9 구조체
// 주어진 점들을 둘러싸는 최소 크기의 사각형의 좌표 P1, P2 구하고 면적을 출력
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 4
struct Point {
    int   x;
    int   y;
};
void print_point() // 좌표를 (1, 1) 식으로 출력한다. 완성할 것
{

}

void main()
{
    struct  Point p[N] = { {1,2}, {6, 1}, {3,4}, {4,5} };
    struct Point P1, P2;
    int area; // 면적
    int i;
    // 모든 점들을 출력한다.
    for (i = 0; i < N; i++) {
        // print_point() 사용하여 완성할 것
    }
    // P1, P2를 구한다. 주어진 변수만 사용할 것.
    printf("P1="); print_point(&P1); // 호출 형식을 참조해서 print_point() 함수를 완성할 것
    printf(" P2="); print_point(&P2);
    // 면적을 계산한다.
    printf("  면적=%d\n", area);
}