// ���α׷��ַ�
// 1�� - C ��� ����
// Lab01-5 : ������� ��� 
// �⵵�� 00~21 --> 2000�� ~ 2021��
// �׷��� ���� ��� 1922�� ~ 1999��
// �Է� : 210720
// ��� : 2021�� 7�� 20��
// �Է� : 221003
// ��� : 1922�� 10�� 3��
// �Է� : 990102
// ��� : 1999�� 1�� 2��
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void main()
{
	int birthy, birthm, birthd;
	char num[7];
	
	while (1) {
		printf("�ֹι�ȣ ���ڸ� : ");
		scanf("%s", num);
	
		birthy = (num[0] - '0') * 10 + (num[1] - '0');
		birthm = (num[2] - '0') * 10 + (num[3] - '0');
		birthd = (num[4] - '0') * 10 + (num[5] - '0');

		if (birthy <= 21 && birthy > 9)   
			printf("20%d�� ", birthy);
		}
		else if (birthy <= 9) {
			printf("200%d�� ", birthy);
		}
		else {
			printf("19%d�� ", birthy);
		}

		printf("%d�� %d�ϻ��Դϴ�.\n", birthm, birthd);
	}
	
	//����üũ��ƾ�߰�-���蹮��?
	//ex) ���� 13�� �Է��ϸ� Ʋ��, ���������� 31��, 30��, 28���� �� ���� �ϴ�.,..
	return 0;
}