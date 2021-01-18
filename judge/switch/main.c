#include <stdio.h>
int main() {
	char grade = 'A';
	switch (grade) /*switch 语句中的 expression 是一个常量表达式，必须是一个整型或枚举类型。*/
	{
	case 'A': /*在一个 switch 中可以有任意数量的 case 语句。每个 case 后跟一个要比较的值和一个冒号。*/
	case 'A-':/*不是每一个 case 都需要包含 break。如果 case 语句不包含 break，控制流将会 继续 后续的 case，直到遇到 break 为止。*/
		printf("Very Good! \n");
		break;
	case 'B':
		printf("Good!");
		break;
	case 'C':
		printf("So So");
		break;
	}
	printf("You grade is %c \n", grade);
	return 0;
}