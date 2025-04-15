// 프로그래밍랩 6주
// Lab6-2 행렬 연산 Matrix 구조체 사용
//adt사용 abstract data type (추상 자료형)
#include <stdio.h>
#define MAXROWS	100
#define MAXCOLS	100
typedef struct matrix {

} Matrix;
#define MAX(a, b) (a>=b ? (a) : (b))
void print_matrix(Matrix *m)
{
	int row, col;
	for (row = 0; row < m->rows; row++) {
		for (col = 0; col < m->cols; col++) {
			printf("%d ", m->datap[row][col]);
		}
		printf("\n");
	}
}
void add_matrix(Matrix *a, Matrix *b, Matrix *c)
{

}
void sub_matrix(Matrix *a, Matrix *b, Matrix *c)
{

}
void main()
{
	//int A[ROWS][COLS] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
	Matrix A = { 3, 3, {{1,2,3},{4,5,6},{7,8,9}} };
	//int B[ROWS][COLS] = {{11, 12, 13}, {14, 15, 16}, {17, 18, 19}};
	Matrix B = { 3, 3, {{11,12,13},{14,15,16},{17,18,19}} };
	//int C[ROWS][COLS] = {0};
	Matrix C;

	printf("Matrix ADT 사용\n");
	printf("A = \n"); 	print_matrix(&A);
	printf("B = \n"); 	print_matrix(&B);
	add_matrix(&A, &B, &C); 
	printf("A + B = \n"); print_matrix(&C);
	sub_matrix(&B, &A, &C);
	printf("B - A = \n"); print_matrix(&C);
}