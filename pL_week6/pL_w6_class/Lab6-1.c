// ���α׷��ַ� 6��
// Lab6-1 ��� �迭 ��� ����
//�迭�� �̿��� ���...
//�̰� ���� �ڷᱸ������ �� �� ����...!!!
//ppt ������ ��
#include <stdio.h>
#define ROWS	3
#define COLS	3
void print_matrix(int m[ROWS][COLS])
{
	int r, c;
	for (r = 0; r < ROWS; r++) {
		for (c = 0; c < COLS; c++) {
			printf("%d ", m[r][c]);
		}
		printf("\n");
	}

}
void add_matrix(int a[ROWS][COLS], int b[ROWS][COLS], int c[ROWS][COLS])
{
	int row, col;
	for (row = 0; row < ROWS; row++) {
		for (col = 0; col < COLS; col++) {
			c[row][col] = a[row][col] + b[row][col];
		}
	}
}
void sub_matrix(int a[ROWS][COLS], int b[ROWS][COLS], int c[ROWS][COLS])
{
	int row, col;
	for (row = 0; row < ROWS; row++) {
		for (col = 0; col < COLS; col++) {
			c[row][col] = a[row][col] - b[row][col];
		}
	}
}
void main()
{
	int A[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	int B[ROWS][COLS] = {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}};
	int C[ROWS][COLS] = {0};

	printf("Matrix �迭 ���\n");
	printf("A = \n"); 	print_matrix(A);
	printf("B = \n"); 	print_matrix(B);
	add_matrix(A, B, C); 
	printf("A + B = \n"); print_matrix(C);
	sub_matrix(B, A, C);
	printf("B - A = \n"); print_matrix(C);
}