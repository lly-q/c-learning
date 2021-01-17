#include <stdio.h>
int plus(int,int);
int main() {
	int rec;
	int a;
	int b;
	printf("Plz type the first num:");
	scanf_s("%d", &a);
	printf("Plz type the second num:");
	scanf_s("%d", &b);
	rec = plus(a,b);
	printf("Final result is %d:", rec);
}