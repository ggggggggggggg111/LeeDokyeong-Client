#include <stdio.h>

int main(void) {
	 
	// 키워드 ( 예약어 )
	// 내부적으로 문법을 위한 용도로 정의되어있는 단어 .

	 // 변수 선언 
	// '자료형'  '식별자이름 ( 변수이름 )'
	// 변수 이름으로 키워드는 사용할 수 없다.



	// 정수형 변수
	int a; // 4byte, 부호가 있는 정수 자료형 
	// unsigned : 다른 자료형에도 앞에 붙어서 부호없는 형태로 사용 가능하게 한다
	unsigned int ua; // 4byte 부호가 없는 정수 자료형
	short s; // 2byte, 부호가 있는 정수 자료형
	long l; // 4byte, 부호가 있는 정수 자료형
	long long ll; // 8byte 이상 , 부호가 있는 정수 자료형
	char c; // 1byte(대부분), 문자 자료형 

	// = : 대입연산자 오른쪽에 있는 값을 왼쪽에 있는 변수에 대입하는 연산자.
	// 쓰레기값 : 확보한 메모리 공간에 남아있는 알수 없는 값 
	// 초기화 : 선언된 변수에 가장 처음으로 값을 대입하는 행위 ( 쓰레기값을 없애기 위함 )
	
	a = 4;
	ua = 0;
	c = 1232; // -128 ~ 127 까지 범위, 1232를 대입하면 오버플로우가 발생함
	s = 1232;
	printf("%d\n", a);
	printf("%d\n", ua);
	printf("%d\n", c);
	printf("%d\n", s);

	// 변수 선언과 동시에 초기화
	int a2 = 3;

	// 실수형 변수 선언
	float f; // 4byte , 부호가 있는 실수 자료형
	double d; // 8byte, 부호가 있는 실수 자료형
	long double ld; // 8byte 이상, 운영체제에 따라 다름
	f = 2.4;
	d = 3.6;
	ld = 2.56;

}