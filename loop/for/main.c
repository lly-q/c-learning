#include <stdio.h>
int main() {
	int time = 100;
	printf("�������\n");
	for (int effect = 1; effect < time; effect++)
	{
		printf("��%d��Ŭ�� \n", effect);
	}
	printf("####��%d��Ŭ��####\n", time);
	printf("��ɳɾͣ�����é®\n");
	return 0;
	/*�״��
	*��������ȱ��int
	* for�е�effect++����ؼ��ϡ�����
	* init; condition; increment ���Բ�д����ð�ű�������
	*/
}