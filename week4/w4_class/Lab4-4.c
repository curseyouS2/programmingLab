//  1학기 프로그래밍랩
// Lab4-4 구조체 연습
#include <stdio.h>
typedef struct complex {
	int real;
	int img;
} COMPLEX;
#define ABS(x) ((x>0) ? (x) : (-x))
void print_complex(COMPLEX *x)
{	//다양한 케이스...0만 나오는 케이스 정수만나오는 케이스 허수만 나오는 케이스....시험문제?
	//real=0,or 없는경우... ...i = 0? <0, 0>없는경우...
	if (x->img >= 0)
		printf("(%d + %di)", x->real, x->img);
	else
		printf("(%d - %di)", x->real, x->img);
}

COMPLEX add(COMPLEX x, COMPLEX y)
{	
	COMPLEX z;
	z.real = x.real + y.real;
	z.img = x.img + y.img;
}

COMPLEX sub(COMPLEX x, COMPLEX y)
{	
	COMPLEX z;
	z.real = x.real - y.real;
	z.img = x.img - y.img;
}

void main()
{
	COMPLEX x, y, z;

	scanf("%d %d", &x.real, &x.img);
	scanf("%d %d", &y.real, &y.img);
	z = add(x, y);
	print_complex(&x); printf(" + "); print_complex(&y);
	printf(" = ");print_complex(&z);
	printf("\n");
	
	z = sub(x, y);
	print_complex(&x); printf(" - ");print_complex(&y);
	printf(" = ");print_complex(&z);
	printf("\n");
}
