#include"Head.h"
// �ж���Ԫ�����Ǹ���
//int main()
//{
//    int ch = '0';
//    while (~(ch = getchar()))
//    {
//        getchar();// �������ˣ�\n
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

//// �ַ�����Ӧ��
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
//				flag = 1;// ����������i=10���ж�
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
//// �ַ�����Ӧ��
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