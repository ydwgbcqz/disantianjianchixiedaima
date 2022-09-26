//#include<stdio.h>
//int main()//打印素数，打印100~200之间的素数
//{
//	int i = 0;
//	int count = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		//判断i是否为素数
//		//素数判断法则
//	    //1.试除法 
//		//产生2->i-1
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}//第一类是中途跳出的数，第二类是没有满足的数，接下来的if就是把这第二类挑出来
//		if (j == i)
//		{
//			count++;
//			printf("%d ", i);
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()//优化打印闰年，打印1000到2000年之间的闰年，并统计一下有多少年
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被100整除是闰年
//		//2.能被400整除是闰年
//		if((year % 4 == 0 &&(year % 100 != 0))||(year%400==0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()//打印闰年，打印1000到2000年之间的闰年，并统计一下有多少年
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		//判断year是否为闰年
//		//1.能被4整除并且不能被100整除是闰年
//		//2.能被400整除是闰年
//		if (year % 4 == 0 && year % 100 != 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//		else if (year % 400 == 0)
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
//	printf("\ncount=%d\n", count);
//	return 0;
//}
//int main()//写一个代码给定两个数。求这两个数的最大公约数
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r=m % n)//m%n为0，则为假，不执行while循环了，不为0则为真，继续执行while循环,m%n为0时把0赋给r,while判断时仍未假，不再执行while循环
//	{
//		//按上面写法可以把这步骤省略，r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()//写一个代码给定两个数。求这两个数的最大公约数
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while(m%n)//m%n为0，则为假，不执行while循环了，不为0则为真，继续执行while循环
//	{
//		r = m % n;
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//int main()//写一个代码打印1-100之间所有3的倍数的数字
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ", i);
//	}
//	return 0;
//}
//int main()//写代码将三个数按从大到小输出
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);//算法实现a中放最大值，b次之，c放最小值,"%d%d%d"和"%d %d %d"注意在输入的时候都要有空格
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp; 
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}