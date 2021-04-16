#include"Head.h"

//// 演草纸--float的范围有待理解
//int main()
//{
//	float a= 12345678901234567890; // 最大 1E6 .这么说float还没有int大？
//	double b = 12345678901234567890;// 最大 1E16 
//	printf("%f\n%f", a,b);
//}

// BC-26 计算三角形的周长和面积
//#include<stdio.h>
//#include<math.h>
//int main()
//{
//    float a = 0, b = 0, c = 0;
//    float p = 0;
//    scanf("%f%f%f", &a, &b, &c);
//    p = (a + b + c) / 2;
//    printf("circumference=%.2f area=%.2f", a + b + c, sqrt(p * (p - a) * (p - b) * (p - c)));
//    return 0;
//}

// BC-37 健康评估  题目不存在

//// BC-38 变种水仙花
//#include<stdio.h>
//int main()
//{
//    int i = 10000;
//    int count = 0;
//    for (i = 10000; i <= 99999; i++)
//    {
//        int a = 0, b = 0, c = 0, d = 0;
//        a = (i % 10000) * (i / 10000);
//        b = (i % 1000) * (i / 1000);
//        c = (i % 100) * (i / 100);
//        d = (i % 10) * (i / 10);
//        if ((a + b + c + d) == i)
//        {
//            printf("%d", i);
//            count++;
//            if (count != 0 && count % 2 == 0)
//                printf(" ");
//        }
//    }
//    return 0;
//}

// BC-20 kiki算数
// 错误代码：
//#include<stdio.h>
//int main()
//{
//    int a = 0, b = 0;
//    scanf("%d%d", &a, &b);
//    printf("%d", (a * b) % 100); // 错误原因：是加法！！！！
//    return 0;
//}

// BC-21 浮点数的个位数字
//// float强制转换为int
//int main()
//{
//	float a= 1114.1243;
//	int b = a;// 都行！！！
//	//int b = (int)a;
//	printf("%d", b);
//	return 0;
//}
//int main() // 这样的在输入时 强制转换也行
//{
//    int a;
//    scanf("%d", &a);
//    printf("%d", a % 10);
//    return 0;
//}

//// 总成绩和平均分计算
//#include<stdio.h>
//int main()
//{
//    float c = 0, m = 0, e = 0;
//    scanf("%f%f%f", &c, &m, &e);// 输入时格式错误，由于二进制编码不同而导致存入的数据，读出来不对
//    printf("%.2f %.2f", c + m + e, (c + m + e) / 3);
//    return 0;
//}
//// 数据类型有必要深入研究
//int main()
//{
//	int a = 0;
//	scanf("%f", &a);// 虽然同样是4个字节，但是存取依然不是按照float类型的方式
//	printf("%f", a);
//	return 0;
//}

//// Kiki和酸奶
//#include<stdio.h>
//int main()
//{
//    int n, h, m;
//    while (EOF != scanf("%d %d %d", &n, &h, &m)) 
//		printf("%d", n - (m / h) - (m % h));
//}// 我认为这个copy来的算法是错的
//int main()
//{
//    int n = 0, h = 0, m = 0;
//    while (scanf("%d%d%d", &n, &h, &m) != EOF)
//    {
//        if (m % h == 0)
//            printf("%d\n", n - m / h);
//        else
//            printf("%d", n - m / h - 1);
//    }
//    return 0;
//}



//// 演草纸 【空格】%c 吸收空格的知识点---吸收字符前所有空格
//int main()
//{
//	char ch = '0',c='0';
//	scanf("%c %c", &ch, &c);
//	printf("**%c**\n**%c**", ch, c);
//}

// BC-34 进制A+B
//// 十六进制和八进制在内存中的存储形式都一样，只是输入和输出的格式不一样而已
//int main()
//{
//	int a = 0x12, b = 05;
//	printf("%d", a + b);
//	return 0;
//}

//// BC-37 网购
//#include<stdio.h>
// // 最简算法
//int main()
//{
//    float price = 0, cut = 0;
//    int month = 0, day = 0, flag = 0;
//    scanf("%f%d%d%d", &price, &month, &day, &flag);
//    if (month == 11 && day == 11)
//        cut = 0.7;
//    if (month == 12 && day == 12)
//        cut = 0.8;
//    price = price * cut - 50 * flag;
//    if (price < 0)
//        printf("0.00");
//    else
//        printf("%.2f", price);// 通过在分支中修改price，最后进行输出
//    return 0;
//}

// BC-39 争夺前五名看 冒泡排序.c 

// BC-40 竞选社长 
//#include<stdio.h>
//int main()
//{
//    char ch = '0';
//    int count_A = 0;
//    int count_B = 0;
//    while ((ch = getchar()) != '0') // 题目要求以'0'结束
//    {
//        if (ch == 'A')
//            count_A++;
//        else
//            count_B++;
//    }
//    if (count_A > count_B)
//        printf("A");
//    else
//        if (count_A < count_B)
//            printf("B");
//        else
//            printf("E");
//    return 0;
//}
//// 整行读取的方式
//#include<stdio.h>
//#include<string.h>
// // 输入一行的方法
//int main()
//{
//    char arr[100] = { 0 };
//    gets(arr);
//    int i = 0;
//    int count = 0;
//    while ( arr[i] != '0'&&arr[i]!=0) //如果没有遇到'0'则会遇到字符串结束符
//    {
//        if (arr[i] == 'A')
//            count++;
//        else
//            count--;
//        i++;
//    }
//    if (count > 0)
//        printf("A");
//    else
//        if (count < 0)
//            printf("B");
//        else
//            printf("E");
//    return 0;
//}

//// 草稿 -- 测试if-else是否是一条语句----答案是一条
//#include<stdio.h>
//int main()
//{
//    int score = 0;
//    while (~scanf("%d", &score))
//        if (score >= 60)
//            printf("Pass");
//        else
//            printf("Fail");
//    return 0;
//}

// BC-46 判断是元音还是辅音
//// 空格%c能够消除输入值前面的空格
//#include<stdio.h>
//// 字符串的应用
//int main()
//{
//	char arr[] = { "AaEeIiOoUu" };
//	int ch = '0';
//	while (~scanf(" %c", &ch))// 空格%c能够消除输入值前面的空格
//								//空格是清除缓存区里存着的\n，这样就可以免用//getchar();来消除缓存区内的\n
//	{
//		//getchar();
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (arr[i] == ch)
//			{
//
//				printf("Vowel\n");
//				break;
//			}
//		}
//		if (i == 10)
//			printf("Consonant\n");
//
//	}
//	return 0;
//}
//int main()
//{
//	char arr[] = { "AaEeIiOoUu" };
//	int ch = '0';
//	while (~scanf("%c\n", &ch))// 直接将\n当作输入必须的格式
//	{
//		//getchar();
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (arr[i] == ch)
//			{
//
//				printf("Vowel\n");// 元音
//				break;
//			}
//		}
//		if (i == 10)// 这里的作用是在arr元音范围内  找不到之后就一定是辅音了
//			printf("Consonant\n");// 辅音
//
//	}
//	return 0;
//}

// BC-47 判断是不是字母
//// 引用isalpha函数，并且采用新的方式消除\n
//#include<stdio.h>
//int main()
//{
//    int ch = 0;
//    while (~scanf("%c", &ch))
//    {
//        if (ch == '\n')continue;
//        if (isalpha(ch))
//            printf("%c is an alphabet.\n", ch);
//        else
//            printf("%c is not an alphabet.\n", ch);
//    }
//    return 0;
//}


// BC - 48 大小写转换
//// 草稿-- 引用判断大小写的库函数
//#include<ctype.h>
//int main()
//{
//    int ch = 0;
//    while (~(ch = getchar()))
//    {
//        getchar();
//        if (islower(ch))
//        {
//            putchar(ch - 32);
//            printf("\n");
//        }
//        if (isupper(ch))
//            printf("%c\n", ch + 32);
//    }
//    return 0;
//}