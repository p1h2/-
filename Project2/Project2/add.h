#include<stdio.h>
int main()
{
	unsigned int a, b, c, d, e, f;
	int month;
	int day;
	int i = 1;
	do
	{
		printf("输入出生日期:\n");
		scanf("%d%d%d", &a, &b, &c);
		if (b > 12 || c > 30)
		{
			printf("输入错误,重新输入\n");
			continue;
		}
		printf("出生日期为%d年%d月%d日\n", a, b, c);
		printf("现在日期：\n");
		scanf("%d%d%d", &d, &e, &f);
		if (e > 12 || f > 30)
		{
			printf("输入错误，重新输入\n");
			continue;
		}
		break;
	} while (i);
	while (1)
	{
		if (b > e)
		{
			if (f > c)
			{
				month = e + 12 - b;
				day = f - c;
				printf("年龄为%d年%d月%d日", d - a, month, day);
			}
			else
			{
				month = e + 11 - b;
				day = f + 30 - c;
				printf("年龄为%d年%d月%d日", d - 1 - a, month, day);
			}
		}

		if (e > b)
		{
			if (f > c)
			{
				month = e - b;
				day = f - c;
				printf("年龄为%d年%d月%d日", d - a, month, day);
			}
			else
			{
				month = e - 1 - b;
				day = f + 30 - c;
				printf("年龄为%d年%d月%d日", d - a, month, day);
			}
		}
		if (b = e)
		{
			if (f > c)
			{
				month = e - e;
				day = f - c;
			}
			if (f < c)
			{
				f = f + 30;
				day = f - c;
				e = e - 1;
				printf("年龄为%d年%d月%d日", d - 1 - a, f + 12 - c, day);
			}
		}
		break;
	}
	return 0;
}



