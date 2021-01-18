#include <stdio.h>
int main() {
	int x;
	int y =1;
	printf("plz type a number:");
	scanf_s("%d", &x);
	if (x > y) {
		printf("你输入了一个大于1的数");
	}
	else
	{
		printf("你输入了一个小于1的数");
	}
	return 0;
}
