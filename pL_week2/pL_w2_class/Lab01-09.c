// Lab01-9 ����ü
// �־��� ������ �ѷ��δ� �ּ� ũ���� �簢���� ��ǥ P1, P2 ���ϰ� ������ ���
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define N 4
struct Point {
    int   x;
    int   y;
};
void print_point() // ��ǥ�� (1, 1) ������ ����Ѵ�. �ϼ��� ��
{

}

void main()
{
    struct  Point p[N] = { {1,2}, {6, 1}, {3,4}, {4,5} };
    struct Point P1, P2;
    int area; // ����
    int i;
    // ��� ������ ����Ѵ�.
    for (i = 0; i < N; i++) {
        // print_point() ����Ͽ� �ϼ��� ��
    }
    // P1, P2�� ���Ѵ�. �־��� ������ ����� ��.
    printf("P1="); print_point(&P1); // ȣ�� ������ �����ؼ� print_point() �Լ��� �ϼ��� ��
    printf(" P2="); print_point(&P2);
    // ������ ����Ѵ�.
    printf("  ����=%d\n", area);
}