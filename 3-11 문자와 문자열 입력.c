#include <stdio.h>

int main(void)
{
	char grade;
	char name[20];

	printf("학점 입력 :");
	scanf("%c", &grade);
	printf("이름 입력: ");
	scanf("%s", name);												//scanf함수라도 문자열에는 &를 안붙여도 됨!!!

	printf("%s의 학점은 %c입니다\n", name, grade);

	return 0;
}