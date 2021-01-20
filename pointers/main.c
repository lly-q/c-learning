#include<stdio.h>
int main() {
	int a = 1;
	int p;
	p = &a;
	printf("a的地址%d，p的地址%d", p,&p);
	return 0;
}