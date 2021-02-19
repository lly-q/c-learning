#include <stdio.h>
int main() {
	int time = 100;
	printf("冲他妈的\n");
	for (int effect = 1; effect < time; effect++)
	{
		printf("第%d次努力 \n", effect);
	}
	printf("####共%d次努力####\n", time);
	printf("达成成就：初出茅庐\n");
	return 0;
	/*易错点
	*变量声明缺少int
	* for中的effect++错误地加上“；”
	* init; condition; increment 可以不写但是冒号必须留下
	*/
}