#include <stdio.h>
int main() {
	int a, b, c, t;
	scanf_s("%d%d%d", &a, &b, &c);
	printf_s("a is value %d", a);
	if (a > b) {
		t = a;
		a = b;
		b = t;
	}
	if (a > c) {
		t = a;
		a = c;
		c = t;
	}
	if (b > c) {
		t = b;
		b = c;
		c = t;
	}
	printf_s("a is value %d", a);
	printf("%d %d %d", a, b, c);
	return 0;
}