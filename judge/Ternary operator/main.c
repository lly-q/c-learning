#include <stdio.h>
int main() {
	int num;
	/*ע�������������໥��ϵ�ģ�printf�е�ð��Ϊ����������ṩ���*/
	printf("plz type a num:");
	scanf_s("%d", &num);
	/*������Ԫ�����*/
	(num > 0) ? printf("����") : printf("������0");
	return 0;
}