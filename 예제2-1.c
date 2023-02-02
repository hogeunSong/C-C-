/* 작성자 : 송호근*/



#include <stdio.h>

int main(void)
{
// 예제 2-1
// 10과 20을 더하는 프로그램

	10 + 20;


// 예제 2-3

	printf("Be happy\n");					//"Be happy"를 출력하고 줄을 바꿈(\n)
	printf("1234567890\n");					//화면에 열 번호 출력하고 줄을 바꿈(\n)
	printf("My\tfriend\n");					//"My"를 출력하고 탭 위치로 이동(\t) 후에 "friend"를 출력하고 줄을 바꿈(\n)
	printf("Goot\bd\tchance\n");			//"Goot"를 출력하고 한 칸 왼쪽으로 이동(\b)해 t를 d로 바꾸고 탭 위치로 이동(\t) 후에 "chance"를 출력하고 줄을 바꿈(\n)
	printf("Cow\rW\a\n");					//맨 앞으로 이동(\r)해 C를 W로 바꾸고 벨소리(\a)를 내고 줄을 바꿈(\n)	



	/* \n(개행, new line): 다음 줄로 이동
	   \b(백스페이스, backspace): 한 칸 왼쪽으로 이동
	   \r(캐리지 리턴, carriage return): 맨 앞으로 이동
	   \a(알럿 경보, alert): 벨소리*/


	
// 예제 2-4

	printf("%d\n", 10);					 //%d 위치에 10 출력
	printf("%lf\n", 3.4);				//%lf 위치에 3.4를 소수점 이하 6자리까지 출력
	printf("%.1lf\n", 3.45);			//소수점 이하 첫째 자리까지 출력(둘째 자리에서 반올림)
	printf("%.10lf\n", 3.4);			//소수점 이하 10자리까지 출력

	printf("%d과 %d의 합은 %d 입니다.\n", 10, 20, 10 + 20);
	printf("%.1lf-%.1lf = %.1lf\n", 3.4, 1.2, 3.4 - 1.2);

	return 0;
}