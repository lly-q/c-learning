#include <stdio.h>
int main() {
	char grade = 'A';
	switch (grade) /*switch ����е� expression ��һ���������ʽ��������һ�����ͻ�ö�����͡�*/
	{
	case 'A': /*��һ�� switch �п��������������� case ��䡣ÿ�� case ���һ��Ҫ�Ƚϵ�ֵ��һ��ð�š�*/
	case 'A-':/*����ÿһ�� case ����Ҫ���� break����� case ��䲻���� break������������ ���� ������ case��ֱ������ break Ϊֹ��*/
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