/*
1010. 一元多项式求导 (25)
时间限制 400 ms
内存限制 65536 kB
代码长度限制 8000 B

设计函数求一元多项式的导数。（注：xn（n为整数）的一阶导数为n*xn-1。）

输入格式：
以指数递降方式输入多项式非零项系数和指数（绝对值均为不超过1000的整数）。数字间以空格分隔。

输出格式：
以与输入相同的格式输出导数多项式非零项的系数和指数。数字间以空格分隔，但结尾不能有多余空
格。注意“零多项式”的指数和系数都是0，但是表示为“0 0”。

输入样例：
3 4 -5 2 6 1 -2 0

输出样例：
12 3 -10 1 6 0
*/
#include <cstdio>

int main(int argc, char const *argv[])
{
	int xiShu[1000],zhiShu[1000];
	int j = 0;
	while(~scanf("%d %d",&xiShu[j],&zhiShu[j])){
		if(zhiShu[j] == 0){
			break;
		}
		xiShu[j] = xiShu[j] * zhiShu[j];
		if (zhiShu[j] != 0){
			zhiShu[j] -= 1;
		}
		j++;
	}
	for (int i = 0; i < j; ++i){
		if(xiShu[i] != 0){
			printf("%d %d",xiShu[i],zhiShu[i]);
		}
		if(xiShu[i+1] != 0 && i+1 < j){
			printf(" ");
		}
	}
	if(j == 0){
		printf("0 0");
	}
	return 0;
}