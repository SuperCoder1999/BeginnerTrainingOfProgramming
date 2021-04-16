#include "Head.h"

// BC-3 有容乃大
//int main()
//{
//    printf("The size of short is \d bytes.\n", sizeof(short));//这里出错了
//    printf("The size of int is %d bytes.\n", sizeof(int));
//    printf("The size of long is %d bytes.\n", sizeof(long));
//    printf("The size of long long is %d bytes.\n", sizeof(long long));
//    return 0;
//}

// BC-6 小飞机
//#include<stdio.h>
//int main()
//{
//    printf("     **     \n     **     \n");
//    printf("************\n************\n");
//    printf("     *  *    \n    *  *    \n");//提交后，结果错误；原因多一个空格
//    return 0;
//}

// BC-7 缩短二进制
//#include<stdio.h>
//int main()
//{
//    printf("0%o 0X%x", 1234, 1234);
//    printf("0%o 0X%X", 1234, 1234);// 16进制可以大写X
//    return 0;
//}

////BC-19 反向输出一个四位数（题库中没有，我在这里加的）
//int main()
//{
//	int a = 0;
//  sacnf("%d",&a);
//	int i = 0;
//	//for (i = 0; i < 4; i++,a/=10)//简洁+1
//	for(;a;a/=10)//简洁+2
//	{
//		printf("%d",a%10);
//	}
//	return 0;
//}


// BC-8 十六进制转十进制
//int main()
//{
//
//  printf("%15d\n", 0xABCDEF);
//    return 0;
//}
// 方法二
//int main()// 本来想找一个计时器，可是这个好像不太管用
//{
//    double start, finish;
//    double duration;
//    start = clock();
//
//    long a = 15 + 14 * 16 + 13 * (int)pow(16, 2) + 12 * (int)pow(16, 3)
//        + 11 * (int)pow(16, 4) + 10 * (int)pow(16, 5);
//
//    printf("%d\n", 15 + 14 * 16 + 13 * (int)pow(16, 2) +
//        12 * (int)pow(16, 3) + 11 * (int)pow(16, 4) + 10 * (int)pow(16, 5));
//    // int的范围是2^31-1 最多可有9个零
//
//    finish = clock();
//    duration = (finish - start);
//    printf("%f seconds\n", duration);
//    return 0;
//}

// BC-9 printf的返回值
////第一行为“Hello world!”
////第二行为printf(“Hello world!”)调用后的返回值
//int main()
//{
//    printf("\n%d", printf("\"Hello world!\""));// 题目中其实不用输出引号
//    return 0;
//}

// BC-12 字符金字塔
//int main()
//{
//    int i = 0;
//    int j = 0, k = 0;
//    char num = 0;
//    scanf("%c", &num);
//    for (i = 0; i < 5; i++)
//    {
//        for (j = 4 - i; j > 0; j--)
//            printf(" ");
//        for (k = 0; k <= i; k++)//外循环是半开区间，内循环想要和外循环一样次数，必须是闭区间
//            printf("%c ", num);
//        printf("\n");
//    }
//    return 0;
//}

// BC-13 ASCII码
//// 字符串输出的方法
//int main()
//{
//	char str[13]= { 73,32,99,97,110,32,100,111,32,105,116,33,0 };
//	printf("%s", str);
//	return 0;
//}
 //当数组是整形数组时，需要对每个一ASCII码进行转换
//int main()
//{
//	int arr[13] = { 73,32,99,97,110,32,100,111,32,105,116,33};
//	char str[13] = { 0 };
//	int i = 0;
//	for (i = 0; i < 12; i++)
//	{
//		str[i] = arr[i];
//	}
//	printf("%s", str);
//	//printf("%s", arr);// %s 必须存字符串地址，虽然%c能按照字符输出int变量对应的字符
//	return 0;
//}
//// 单个字符输出的方法
//int main()
//{
//    int i = 0;
//    char arr[12] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//    for (i = 0; i < 12; i++)
//        printf("%c", arr[i]);//还可以用字符串输出，不过记得加\0
//    return 0;
//}

// BC-14 出生日期输入输出
//// 变换思想很重要，不论怎么变化都需要将原数字更改一次
//int main()
//{
//	int value = 0;
//	scanf("%d", &value);
//	printf("year=%d\n", value / 10000);// 除10000得到前四位数字，但是并没有改变value
//	value %= 10000;// 彻底抛弃前四位数字，在后四位数字中操作
//	printf("month=%02d\n", value / 100);// 只得到前两位数字
//	printf("date=%02d\n", value % 100);// 得到后两位数字
//	return 0;
//}
//int main()
//{
//	int value = 0;
//	int year = 0, month = 0, date = 0;
//	scanf("%d", &value);
//	date = value % 100;
//	value /= 100;
//	month = value % 100;
//	year = value / 100;
//	printf("year=%d\nmonth=%02d\ndate=%02d", year, month, date);
//	return 0;
//}
//这题中的知识点
//%0md,对齐时空位置上添加0
//int main()
//{
//	printf("%04d", 1);
//	return 0;
//}

// BC-15 按照格式输入并交换输出
// 两数交换在 另一个文件内


// BC-28 大小写转换
// 总的来说，题目本身就没有太严谨，但是代码还是无法做到与题目的意思相同
////大小写转换
//int main()
//{
//	int ch = 0;// 可否用char类型直接避免接收\n
//	while ((ch = getchar() )!= EOF)// 逻辑判断先于赋值 
//	{
//		putchar(ch+32);
//		getchar();//用于处理缓冲区中的\n
//		printf("\n");
//	}
//	return 0;
//}
// 能停止，但是需要处理掉\n
//#include<stdio.h>
//int main()
//{
//	int ch = 0;// 可否用char类型直接避免接收\n,即使用char，在getchar中还是要处理\n
//	while ((ch = getchar()) != EOF)// 逻辑判断先于赋值 ,ctrl+z 退出程序
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			putchar(ch - 32);
//			getchar();//用于处理缓冲区中的\n
//			printf("\n");
//		}
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			putchar(ch + 32);
//			getchar();//用于处理缓冲区中的\n
//			printf("\n");
//		}
//
//	}
//	return 0;
//}
// 不需用处理掉\n 但是无法停止
//int main()
//{
//    char ch = '0';
//    while (scanf("%c", &ch)!=EOF)// sacnf能避免接收\n  其实对于scanf的理解还不是很透彻
//    {
//       // if (ch == '\n')
//          //  continue;
//        if (ch <= 'z' && ch>='a')
//        {
//            putchar(ch - 32);
//            printf("\n");
//        }
//        if (ch <= 'Z' && ch>='A')
//        {
//            putchar(ch - 32);
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main()// 检验putchar函数的用法的
//{
//	char ch = '0';
//	scanf("%c", &ch);
//	putchar(ch-32);
//	printf("%c", ch);
//	return 0;
//}
//// 不需用处理掉\n 但是无法停止
//int main()
//{
//    char ch = '0';
//    while (scanf("%c", &ch) == 1)
//    {
//        if (ch <= 'z' && ch>='a')
//        {
//            putchar(ch - 32);
//            printf("\n");
//        }
//        if (ch <= 'Z' && ch>='A')
//        {
//            putchar(ch + 32);
//            printf("\n");
//        }
//    }
//    return 0;
//}
//int main()
//{
//    char ch = '0';
//    while (scanf("%c", &ch) == 1)
//    {
//        if (ch < 'z' && ch>'a')
//        {
//            putchar(ch - 32);
//        }
//        if (ch < 'Z' && ch>'A')
//        {
//            putchar(ch - 32);
//        }
//        printf("\n");// 即使和上面的没有太大差别，但还是回车了两次
//    }
//    return 0;
//}


// BC-29 2的n次方计算
//// 不用累计乘法，因为这题在求2^n（用左移操作符更方便）。快速次幂法，适合不是以2为底的次幂运算
// 错误代码：错因：理解错误，此算法仅在求num*2 
//int main()
//{
//    int num = 0;
//    while (1)
//    {
//        scanf("%d", &num);
//        num <<= 1;
//        printf("%d\n", num);
//    }
//    return 0;
//}
//int main()
//{
//    while (1)
//    {
//        int y = 0;
//        int x = 2;
//        int i = 0;
//        scanf("%d", &y);
//        x <<= y-1;// 算术运算符优先于位移
//        printf("%d\n", x);
//    }
//    return 0;
//}
////正确解法
//int main()
//{
//    int y = 0;
//    while (scanf("%d", &y) != EOF)//牛客网，是让scanf抓取一个文件中的预留数值，所以会遇到文件结束符
//        printf("%d\n", 1 << y);// 或者直接用库函数pow
//    return 0;
//}

// BC-35 判断字母
//int main()
//{
//    char ch = '0';
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch <= 'z' && ch >= 'a' || ch <= 'Z' && ch >= 'A')
//            printf("YES\n");
//        else
//            printf("NO\n");
//        getchar();
//    }
//    return 0;
//}
//可以用库函数--isalpha（是的话返回1，不是返回0）
//#include <stdio.h>
//int main()
//{
//    char ch = 0;
//    while (~scanf("%c", &ch))
//    {
//        getchar();// 处理在前也可以，因为它取走了，但是不影响ch
//        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//            printf("YES\n");
//        else
//            printf("NO\n");
//    }
//    return 0;
//}

// 2021.4.15 回顾练习时的演草纸

//// int 差不多能存 1E9
//int main() {
//	int a = 1000000000;// int 差不多能存 1E9 
//	printf("%d", a);
//	return 0;
//}

// BC-22 你能活多少秒
//int main()
//{
//    double b= 3.156E7;
//    int age;
//    scanf("%d", &age);
//    printf("%f", age * b);
//    return 0;
//}

//// BC-34 进制A+B
//int main()
//{
//    int a = 0, b = 0;
//    scanf("%x%o", &a, &b);// 输入形式可以是：0x12 05  也可以是 12  5  
//    printf("%d", a + b);
//    return 0;
//}