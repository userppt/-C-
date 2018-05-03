#include "stdio.h"
#include "string.h"
// 打印
void print(char **tmp,int num)
{
	int i;
	for (i = 0; i < num; i++)
	{
		printf("%s\n", tmp[i]);
	}
}
// 排序
void sort(char **tmp,int num)
{
	int i, j=0;
	char *tmm;
	for (i = 0; i < num; i++)
	{
		for (j = i + 1; j < num - 1; j++)
		{
			if (strcmp(tmp[i], tmp[j])> 0)
			{
				tmm = tmp[i];
				tmp[i] = tmp[j];
				tmp[j] = tmm;
			}
		}
	}
}
//主函数
void main()
{
	char *aa[] = { "aaa", "bbb", "ccc", "111","ddd" };
	int num;
	num = sizeof(aa) / sizeof(aa[0]);
	sort(aa, num);
	print(aa,num);
}
