#include <stdio.h>
int main() {
	int a = 1;
	do {
		printf("�����%d��\n",a);
		a= a++;
	} while (a < 10); /*�ǵüӷֺţ���Ҫ����*/
	return 0;
}