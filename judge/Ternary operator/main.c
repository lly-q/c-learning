#include <stdio.h>
int main() {
	int num;
	/*注意下面两行是相互联系的，printf中的冒号为输入的数字提供入口*/
	printf("plz type a num:");
	scanf_s("%d", &num);
	/*用了三元运算符*/
	(num > 0) ? printf("正数") : printf("负数或0");
	return 0;
}