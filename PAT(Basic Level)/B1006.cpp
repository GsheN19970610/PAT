/*
1006. 换个格式输出整数 (15)
时间限制 400 ms
内存限制 65536 kB
代码长度限制 8000 B

让我们用字母B来表示“百”、字母S表示“十”，用“12...n”来表示个位数字n（<10），换个
格式来输出任一个不超过3位的正整数。例如234应该被输出为BBSSS1234，因为它有2个“百”、
3个“十”、以及个位的4。

输入格式：
每个测试输入包含1个测试用例，给出正整数n（<1000）。

输出格式：
每个测试用例的输出占一行，用规定的格式输出n。

输入样例1：
234
输出样例1：
BBSSS1234

输入样例2：
23
输出样例2：
SS123
*/
#include <stdio.h>

int main(){
	int n,b,s,g,i;
	scanf("%d",&n);
	g = n%10;
	s = n/10%10;
	b = n/100%10;
	for(i = 0; i < b; i++){
		printf("B");
	}
	for(i = 0; i < s; i++){
		printf("S");
	}
	for(i = 0; i < g; i++){
		printf("%d",i+1);
	}
	return 0;	
}
