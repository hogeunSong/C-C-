#include <stdio.h>

int main(void)

{

	int kor, eng, mat;

	kor = 70;
	eng = 80;
	mat = 90;

	int tot;

	tot = kor + eng + mat;

	printf("3가지 과목의 총점 %d\n", tot);
	printf("국어: %d, 영어: %d, 수학: %d\n", kor, eng, mat);

	return 0;
}