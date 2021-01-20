#include<stdio.h>
int main() {
	int a = 1;
	int p = 2;
	int *b = p;
	p = &a;
	printf("a的地址%d，\np的地址%d,\nb的值%d。\n", p,&p,b);
	return 0;
}