#include <stdio.h>
int arrays1[1];
int num;
int b, tmpMin ;
int main() {
	int i;
	printf("Plz type num");
	scanf_s("%d\n", &num);
	for (i = 1; i <num+1 ;  i++)
	{
		printf("Plz type the  %d num",num);
		scanf_s("%d", &arrays1[i - 1]);
	}
	int MInnum = min();
	printf("%d", MInnum);
	return 0;
}
int min() {
	tmpMin = arrays1[0];
	for ( b =0; b < num; b++){
		if (arrays1[b] <tmpMin)
		{
			tmpMin = arrays1[b];
		}
	}
	return tmpMin;

}