// ���α׷��ַ� 6��
// Lab6-3 ����ü ����� �� ���
#include <stdio.h>
#include <stdlib.h>
#include <string.h> // �̸� ã�� ���� �ʿ�
typedef struct student {
	char name[20];
	int year;
	char no[20];
	char phone[20];
} Student;

void PrintStudent(Student *s)
{

}
void InputStudent(Student *s)
{

}

void main(void)
{
	int i, count, found;
	char name[20]; // ã�� �̸� �Է� ��
	Student *data;
	printf("��� : ");
	scanf("%d", &count);
	data = (Student *)malloc(count*sizeof(Student)); // �ϼ��Ұ�
	for (i=0;i<count;i++) { 
		// �Է� �κ� �ϼ�
		printf("\n�ڷ��ȣ %d �Է�\n", i+1);
		InputStudent(&data[i]); // �ϼ��Ұ�
	}
	for (i=0;i<count;i++) // ���
		PrintStudent(&data[i]);

	printf("ã�� �̸�: ");
	scanf("%s", name); // �̸� �Է�
	found = 0;
	for (i=0;i<count;i++) { // �ڷ� ã��
		// ���� �̸��� ã�Ƽ� ������  break
		if () // ã���� break
			break;
	}
	if (i<count) // ã�Ҵ�.
		PrintStudent( );
	else
		printf("ã�� ����Ÿ�� �����ϴ�.\n");
}