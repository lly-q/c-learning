#include <stdio.h>
int main() {
	int a[10];
	int i,b;
	for (i = 0; i < 10; i++)
	{
		a[i] = i + 100;
		printf("a[%d] =%d \n", i, a[i]);
		b = a[i];
	}
	printf("a数组第10个数是:%d\n", a[9]); 
	/*不能再使用printf("a数组第10个数是:%d\n", 
	 *a[i]因为在最后以一次循环i已经变成10;如果使用a[10]或a[i]就会溢出*/
	return 0;
}