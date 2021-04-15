#include"Head.h"
// 判断是元音还是辅音
//int main()
//{
//    int ch = '0';
//    while (~(ch = getchar()))
//    {
//        getchar();// 处理（过滤）\n
//        switch (ch)
//        {
//        case 'A':
//        case 'E':
//        case 'I':
//        case 'O':
//        case 'U':
//        case 'a':
//        case 'e':
//        case 'i':
//        case 'o':
//        case 'u':
//            printf("Vowel\n");
//            break;
//        default:
//            printf("Consonant\n");
//            break;
//        }
//    }
//    return 0;
//}

//// 字符串的应用
//int main()
//{
//	char arr[] = { "AaEeIiOoUu" };
//	int ch = '0';
//	while (~(ch = getchar()))
//	{
//		int i = 0;
//		int flag = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (arr[i] == ch)
//			{
//				flag = 1;// 可以用最后的i=10来判断
//			}
//		}
//		if (flag == 1)
//			printf("Vowel\n");
//		else
//			printf("Consonant\n");
//
//	}
//	return 0;
//}
//
//#include<stdio.h>
//// 字符串的应用
//int main()
//{
//	char arr[] = { "AaEeIiOoUu" };
//	int ch = '0';
//	while (~(ch = getchar()))
//	{
//        getchar();
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			if (arr[i] == ch)
//            {
//                
//                printf("Vowel\n");
//                break;
//            }
//		}
//		if (i == 10)
//			printf("Consonant\n");
//
//	}
//	return 0;
//}