#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("���� �Է� :");
	scanf("%c", &grade);
	printf("�̸� �Է�: ");
	scanf("%s", name);												//scanf�Լ��� ���ڿ����� &�� �Ⱥٿ��� ��!!!

	printf("%s�� ������ %c�Դϴ�\n", name, grade);

	return 0;
}