//#include <stdio.h>
//int main()
//{
//	printf("hello,world!\n");
//	system("pause");
//	return 0;
//}

//#include <stdlib.h>
//#define PI 3.14159
//
//int main()
//{
//	printf("hello,world!\n");
//	printf("圆周率约等于%f\n", PI);
//	system("pause");
//
//	return 0;
//}


//int main()
//{
//	int sum, i;//定义变量的语句
//	sum = 0 ;  //赋值语句
//	i = 100;   //赋值语句
//	if (i > 0)
//	{
//		sum = sum + i;
//		i = i + 1;
//	}
//	else
//		printf("i的值不大于0！");
//		sum = 0, i = 0;//赋值语句
//	while (i <= 100)
//	{
//		sum = sum + i;
//			i = i + 1;
//	}
//	printf("1和100的和是%d",sum);//调用printf函数语句
//	system("pause");             //调用system函数暂停程序运行的语句
//	return 0;                    //函数返回语句
//
//}


//#include "stdio.h"
//main()
//{
//	int  a, b, c;
//	a = 10; b = 20;
//	c = a + b;
//	printf("%d+%d+%d=%d\n", a, b, c);
//
//}


//#include <stdio.h>
//int main()
//{
//	int x = 7;
//	while (x < 50)
//	{
//		printf("%d", x);
//		x = x + 7;
//		}
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int s = 0;
//	int i = 0;
//	while (i < 100)
//	{
//		i = i + 1;
//		s = s + 1;
//	}
//	printf("1+2+3+...+100=%d", s);
//	system("pause");
//	
//}

//#include <stdio.h>
//int main()
//{
//	int myscore, id;
//	long int distance = 1800000;
//	char myfname = '朱', jod = 'T';
//	float average = 86.5;
//	double pi = 3.1415926536;
//	
//}

//#include <stdio.h>
//int main()
//{
//	int a = 10, b = 9;
//	a = b;
//	b = a;
//	printf("a = % d，b = % d", a, b);
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int a = 12, b = 18;
//	int c;
//	c = a;
//	a = b;
//	b = c;
//	printf("a=%d,b=%d", a, b);
//	system("pause");
//	return 0;
//}


//#include <stdio.h>
//int main()
//{
//	int math[50];
//	char myname [10] = "朱聪慧";
//	char month[] = "september";
//	int chengji[4][50];
//
//	return 0;
//
//}

//#include <sjtdio.h>
//int main()
//{
//	int math[6] = { 89,85,90,75,69,95 };
//	int matha11[] = { 89,85,90,75,69,95 };
//	char words[5] = { 'a','e','i','o','u' };
//	char month[] = "september";
//	int sore[2][3] = { {85,90,95},{65,60,59} };
//}

#include <stdio.h>
#include <string.h>
int main()
{
	char string[6];
	char month[10];

	string[0] = 'c';
	string[1] = 'h';
	string[2] = 'i';
	string[3] = 'n';
	string[4] = 'a';
	string[5] = '\0';
	stropy(month, "july");
	int month_len = strlen(month);
	int month_len2 = sizeof(month); 
	
}