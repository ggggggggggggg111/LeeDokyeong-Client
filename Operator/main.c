#include <stdio.h>

int main(void) {
	// ���Կ�����
	// ������ ���� ������ ���� ���� �޸𸮿� ������
	// �������� R-Value, ������ L-Value �����
	// ===========================================================
	int intResult = 0;
	double doubleResult = 0.0;

	// ��� ������
	// ===========================================================

	// + ������
	intResult = 3 + 4;
	doubleResult = 3.0 + 4.0;
	printf("%d\n", intResult);
	printf("%.2lf\n", doubleResult);

	// - ������
	intResult = 3 - 4;
	doubleResult = 3.0 - 4.0;
	printf("\n%d\n", intResult);
	printf("%.2lf\n", doubleResult);

	// / ������
	// ������ ������ ������ ���� �� ��ȯ�Ѵ�. ( �Ҽ��� ���� ���� )
	intResult = 3 / 4;
	doubleResult = 3.0 / 4.0;
	printf("\n%d\n", intResult);
	printf("%.2lf\n", doubleResult);

	// * ������
	intResult = 3 * 4;
	doubleResult = 3.0 * 4.0; // ���������� ���� �Ŀ� �Ϲ������� �Ǽ������� �ڷ��� ��ȯ�� �Ͼ ���
	printf("\n%d\n", intResult);
	printf("%.2lf\n", doubleResult);

	// ��ȣ ������
	// =================================================================================
	intResult = +3;
	intResult = -3;

	// ���� ���Կ�����
	// =================================================================================
	intResult = 0;

	// + ���Կ�����
	intResult += 3;
	printf("\n%d\n", intResult);

	// - ���Կ�����
	intResult -= 3;
	printf("\n%d\n", intResult);

	// / ���Կ�����
	intResult /= 3;
	printf("\n%d\n", intResult);

	// * ���Կ�����
	intResult *= 3;
	printf("\n%d\n", intResult);

	// % ���Կ�����
	intResult %= 3;
	printf("\n%d\n", intResult);

	// ���� ������ 
	// ====================================================

	// ���� ������
	printf("Start testing increament operator ! \n");
	intResult = 0;
	printf("intResult : %d\n", intResult);
	printf("intResult : %d\n", intResult++); // ���� ���� ������, �ش� �����ڰ� ���Ե� ���� ������ �Ŀ� �����Ѵ� .
	printf("intResult : %d\n", intResult);
	intResult++;
	printf("intResult : %d\n", intResult);
	printf("intResult : %d\n", ++intResult); // ���� ���� ������ , �ش� ������ �� �Ŀ� ���� �����Ѵ� .
	printf("intResult : %d\n", intResult);

	// ���� ������
	printf("Start testing increament operator ! \n");
	intResult = 0;
	printf("intResult : %d\n", intResult);
	printf("intResult : %d\n", intResult--); // ���� ���� ������, �ش� �����ڰ� ���Ե� ���� ������ �Ŀ� �����Ѵ� .
	printf("intResult : %d\n", intResult);
	intResult--;
	printf("intResult : %d\n", intResult);
	printf("intResult : %d\n", --intResult); // ���� ���� ������ , �ش� ������ �� �Ŀ� ���� �����Ѵ� .
	printf("intResult : %d\n", intResult);

	// ���� ������ 
	// ���� ����� ���̸� 1, �����̸� 0�� ��ȯ��
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

	// �� ������
	// ���� ���� : 0�� �ƴ�
	// ������ ���� : 0
	// ===============================================================================
	int grade = 80;

	// && ( and ������ )
	printf("is %d 30 < grade and 80 > Grade ? %d\n", grade, (30 < grade) && (80 > grade));

	// || ( or ������ )
	// �ǿ����� �ΰ� �߿� �ϳ��� ���̸� 1 , �������� ��� ���� 0
	printf("is %d 30 < grade and 80 > Grade ? %d\n", grade, (30 < grade) || (80 > grade));

	// ! ( not ������ )
	// ���Ͽ�����. ( �ǿ����ڰ� �ϳ��� ��� )
	// �ǿ����� ����� ������Ų��. ��, 1�̸� 0, 0 �̸� 1
	printf("is %d 30 < grade and 80 > Grade ? %d\n", grade, !(30 < grade));

	// ��Ʈ ������
	// ==========================================================================================

	// & ( ��Ʈ and ������. �ǿ����ڰ� 2��. ���������ڴ� �ǿ����ڰ� �ϳ��� �����̴� )
	printf("%d & %d = %d\n", 5, 10, 5 & 10);
}