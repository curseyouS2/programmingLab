//  1�б� ���α׷��ַ�
// Lab4-4 ����ü ����
#include <stdio.h>
typedef struct complex {
	int real;
	int img;
} COMPLEX;
#define ABS(x) ((x>0) ? (x) : (-x))
void print_complex(COMPLEX *x)
{
	if (x->real != 0)
		printf("%d", x->real);

	if (x->img > 0 && x->real != 0)
		printf("+");

	if (x->img != 0)
		if (x->img == 1) {
			printf("i");
		}
		else {
			printf("%di", x->img); // ����δ� i �����ؼ� ���
		}
	if (x->real == 0 && x->img == 0)
		printf("0");
}

COMPLEX add(COMPLEX x, COMPLEX y)
{
	COMPLEX result;
	result.real = x.real + y.real;
	result.img = x.img + y.img;
	return result;
}

COMPLEX sub(COMPLEX x, COMPLEX y)
{
	COMPLEX result;
	result.real = x.real - y.real;
	result.img = x.img - y.img;
	return result;
}

void main()
{
	COMPLEX x, y, z;
	printf("2491040 ������\n");

	while (1) {
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

}
