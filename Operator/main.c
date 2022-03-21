#include <stdio.h>

int main(void) {
	// 대입연산자
	// 연산자 기준 오른쪽 값을 왼쪽 메모리에 대입함
	// 오른쪽을 R-Value, 왼쪽을 L-Value 라고함
	// ===========================================================
	int intResult = 0;
	double doubleResult = 0.0;

	// 산술 연산자
	// ===========================================================

	// + 연산자
	intResult = 3 + 4;
	doubleResult = 3.0 + 4.0;
	printf("%d\n", intResult);
	printf("%.2lf\n", doubleResult);

	// - 연산자
	intResult = 3 - 4;
	doubleResult = 3.0 - 4.0;
	printf("\n%d\n", intResult);
	printf("%.2lf\n", doubleResult);

	// / 연산자
	// 정수의 나누기 연산은 정수 몫만 반환한다. ( 소수점 이하 버림 )
	intResult = 3 / 4;
	doubleResult = 3.0 / 4.0;
	printf("\n%d\n", intResult);
	printf("%.2lf\n", doubleResult);

	// * 연산자
	intResult = 3 * 4;
	doubleResult = 3.0 * 4.0; // 정수형간의 연산 후에 암묵적으로 실수형으로 자료형 반환이 일어난 경우
	printf("\n%d\n", intResult);
	printf("%.2lf\n", doubleResult);

	// 부호 연산자
	// =================================================================================
	intResult = +3;
	intResult = -3;

	// 복합 대입연산자
	// =================================================================================
	intResult = 0;

	// + 대입연산자
	intResult += 3;
	printf("\n%d\n", intResult);

	// - 대입연산자
	intResult -= 3;
	printf("\n%d\n", intResult);

	// / 대입연산자
	intResult /= 3;
	printf("\n%d\n", intResult);

	// * 대입연산자
	intResult *= 3;
	printf("\n%d\n", intResult);

	// % 대입연산자
	intResult %= 3;
	printf("\n%d\n", intResult);

	// 증감 연산자 
	// ====================================================

	// 증가 연산자
	printf("Start testing increament operator ! \n");
	intResult = 0;
	printf("intResult : %d\n", intResult);
	printf("intResult : %d\n", intResult++); // 후위 증가 연산자, 해당 연산자가 포함된 줄을 실행한 후에 연산한다 .
	printf("intResult : %d\n", intResult);
	intResult++;
	printf("intResult : %d\n", intResult);
	printf("intResult : %d\n", ++intResult); // 전위 증가 연산자 , 해당 연산을 한 후에 줄을 실행한다 .
	printf("intResult : %d\n", intResult);

	// 감소 연산자
	printf("Start testing increament operator ! \n");
	intResult = 0;
	printf("intResult : %d\n", intResult);
	printf("intResult : %d\n", intResult--); // 후위 증가 연산자, 해당 연산자가 포함된 줄을 실행한 후에 연산한다 .
	printf("intResult : %d\n", intResult);
	intResult--;
	printf("intResult : %d\n", intResult);
	printf("intResult : %d\n", --intResult); // 전위 증가 연산자 , 해당 연산을 한 후에 줄을 실행한다 .
	printf("intResult : %d\n", intResult);

	// 관계 연산자 
	// 연산 결과가 참이면 1, 거짓이면 0을 반환함
	// =================================================================================================================

	// <
	printf("\nis %d smaller than %d ?\n %d", 3, 4, 3 < 4);

	// >
	printf("\nis %d bigger than %d ?\n %d", 3, 4, 3 > 4);

	 // == 
	printf("\nis %d same with %d ?\n %d", 3, 4, 3 == 4);

	// <=
	printf("\nis %d same with or smaller than %d ?\n %d", 3, 4, 3 <= 4);

	// >=
	printf("\nis %d same with or bigger than %d ?\n %d\n", 3, 4, 3 >= 4);

	// 논리 연산자
	// 참의 기준 : 0이 아님
	// 거짓의 기준 : 0
	// ===============================================================================
	int grade = 80;

	// && ( and 연산자 )
	printf("is %d 30 < grade and 80 > Grade ? %d\n", grade, (30 < grade) && (80 > grade));

	// || ( or 연산자 )
	// 피연산자 두개 중에 하나라도 참이면 1 , 나머지의 경우 전부 0
	printf("is %d 30 < grade and 80 > Grade ? %d\n", grade, (30 < grade) || (80 > grade));

	// ! ( not 연산자 )
	// 단일연산자. ( 피연산자가 하나인 경우 )
	// 피연산자 결과를 반전시킨다. 즉, 1이면 0, 0 이면 1
	printf("is %d 30 < grade and 80 > Grade ? %d\n", grade, !(30 < grade));

	// 비트 연산자
	// ==========================================================================================

	// & ( 비트 and 연산자. 피연산자가 2개. 참조연산자는 피연산자가 하나로 별개이다 )
	printf("%d & %d = %d\n", 5, 10, 5 & 10);
}