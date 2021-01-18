#include <stdio.h>
int main() {
	char grade = 'A';
	switch (grade)
	{
	case 'A':
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