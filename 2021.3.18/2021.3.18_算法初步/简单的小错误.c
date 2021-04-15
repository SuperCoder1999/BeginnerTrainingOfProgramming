#include "Head.h"

// 简单练习
//int main()
//{
//    printf("The size of short is \d bytes.\n", sizeof(short));//这里出错了
//    printf("The size of int is %d bytes.\n", sizeof(int));
//    printf("The size of long is %d bytes.\n", sizeof(long));
//    printf("The size of long long is %d bytes.\n", sizeof(long long));
//    return 0;
//}

// 打印一个"飞机"
//#include<stdio.h>
//int main()
//{
//    printf("     **     \n     **     \n");
//    printf("************\n************\n");
//    printf("     *  *    \n    *  *    \n");//多一个空格
//    return 0;
//}

// 十进制转十六进制
//#include<stdio.h>
//int main()
//{
//    printf("0%o 0X%x", 1234, 1234);
//    printf("0%o 0X%X", 1234, 1234);// 16进制可以大写X
//    return 0;
//}

////反向输出一个四位数（题库中没有，我在这里加的）
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


// 十六进制转十进制
//int main()
//{
//
//  printf("%15d\n", 0xABCDEF);
//    return 0;
//}
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

////第一行为“Hello world!”
////第二行为printf(“Hello world!”)调用后的返回值
//int main()
//{
//    printf("\n%d", printf("\"Hello world!\""));// 题目中其实不用输出引号
//    return 0;
//}

//%0md,对齐时空位置上添加0
//int main()
//{
//	printf("%04d", 1);
//	return 0;
//}

//// 不用累计乘法，求2^n（用左移操作符）
//// 搞错了，这个算法只是整体乘以二
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
