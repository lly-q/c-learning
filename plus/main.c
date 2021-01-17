#include <stdio.h>
/*声明加法函数*/
int plus(int,int);
int main() {
	int rec;
	int a;
	int b;
	printf("Plz type the first num:");
	/*scanf_s语法（类型参数，加存入变量的地址）*/
	scanf_s("%d", &a);
	printf("Plz type the second num:");
	scanf_s("%d", &b);
	/*调用加法函数并用变量a.b进行运算*/
	rec = plus(a,b);
	printf("Final result is %d:", rec);
}