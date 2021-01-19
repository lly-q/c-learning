#include <stdio.h>
int main() {
	int a = 1;
	do {
		printf("爱你第%d次\n",a);
		a= a++;
	} while (a < 10); /*记得加分号，不要忘了*/
	return 0;
}