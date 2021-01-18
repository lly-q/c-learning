#include <stdio.h>
int main() {
	printf("冲他妈的\n");
	for (int effect = 1; effect < 11; effect++)
	{
		printf("第%d次努力 \n", effect);
	}
	printf("达成成就：初出茅庐\n");
	return 0;
	/*易错点
	*变量声明缺少int
	* for中的effect++错误地加上“；”
	* init; condition; increment 可以不写但是冒号必须留下
	*/
}