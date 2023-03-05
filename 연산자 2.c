#include <stdio.h>
int main(void)
{
/*---------------------------------------------------------------------------------------------------------------------------------------------------------------*/
//비트 연산자

	int a = 10;
	int b = 12;

	printf("a & b: %d\n", a & b);				//비트별로 논리곱 연산(&)을 수행함
	printf("a ^ b: %d\n", a ^ b);				//비트 단위로 배타적 논리합 연산(^)을 수행함
	printf("a | b: %d\n", a | b);				//비트별로 논리합 연산(|)을 수행함
	printf("~a : %d\n", ~a);					//피연산자의 비트를 반전시킴
	printf("a << 1: %d\n", a << 1);
	printf("a >> 2: %d\n", a >> 2);

/*---------------------------------------------------------------------------------------------------------------------------------------------------------------*/
//연산자 우선순위와 연산 방향

	int k = 10, h = 5;
	int res;

	res = k / h * 2;									// 우선순위가 같으므로 왼쪽부터 차례로 연산
	printf("res = %d\n", res);
	
	res = ++k * 3;										//k의 값에 1을 증가시키고 3을 곱한다
	printf("res = %d\n", res);

	res = k > h && k != 5;								//k>h의 결과와 k != 5의 결과를 %% 연산
	printf("res = %d\n", res);

	res = a % 3 == 0;									//k%3의 값이 0과 같은지 확인
	printf("res = %d\n", res);


	return 0;
}