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
	printf("a�����10������:%d\n", a[9]); 
	/*������ʹ��printf("a�����10������:%d\n", 
	 *a[i]��Ϊ�������һ��ѭ��i�Ѿ����10;���ʹ��a[10]��a[i]�ͻ����*/
	return 0;
}