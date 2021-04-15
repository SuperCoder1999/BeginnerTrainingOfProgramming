#include "Head.h"

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