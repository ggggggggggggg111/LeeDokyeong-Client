#include <stdio.h>

int main() {
	// scanf
	// scanf(���Ĺ��ڿ�, ������ ����)
	// �Է��� ���� �� ���� ����ϴٰ� ������ ������ ������ �ش� �Է°��� ������.
	int n = 0;
	printf("Enter integer value");
	scanf("%d", &n);
	printf("n : %d", n);
	
	// & : ���� ������ 
	// ���� �տ� �پ �ش� ������ �ּҰ��� �����ϴ� ������

	float f = 0;
	scanf("%f", &f);
	printf("f : %.2f", f);

	char str[20];
	scanf("%s", str, 10 * sizeof(char));
	// sizeof Ű����
	// ������� : sizeof(�ڷ���)
	// wkfyguddp goekdgksms epdlxj zmrlfmf qksghksgka

	printf("%s", str);
	return 0;
}