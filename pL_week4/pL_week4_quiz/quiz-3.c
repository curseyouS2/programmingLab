// ���� ����
// �Լ� �߰����� �� �� reverse() ����
// main�� ���� �߰����� �� ��
// string.h �� �Լ� ���� �� �� strlen() ����
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// #include <string.h>
void main()
{
	int T, i, len;
	char str[81];
	printf("2491040 ������\n");
	// T �Է�
	scanf("%d", &T);
	// T Ƚ�� ��ŭ
	while (T--) {
		scanf("%s", str);
		for (len = 0;len < 81;len++) {
			if (str[len] == '\0') {
				break;
			}
		}
		for (i=len ;i >= 0;i--) {
			if (str[i] == '\0') {
				continue;
			}
			else {
				printf("%c", str[i]);
			}
		}
		printf("\n");

	}
		// ���ڿ� �Է�
		// ����� ���
}


