#include "Head.h"

// �ܵ���˵����Ŀ�����û��̫�Ͻ������Ǵ��뻹���޷���������Ŀ����˼��ͬ
////��Сдת��
//int main()
//{
//	int ch = 0;// �ɷ���char����ֱ�ӱ������\n
//	while ((ch = getchar() )!= EOF)// �߼��ж����ڸ�ֵ 
//	{
//		putchar(ch+32);
//		getchar();//���ڴ��������е�\n
//		printf("\n");
//	}
//	return 0;
//}

// ��ֹͣ��������Ҫ�����\n
//#include<stdio.h>
//int main()
//{
//	int ch = 0;// �ɷ���char����ֱ�ӱ������\n,��ʹ��char����getchar�л���Ҫ����\n
//	while ((ch = getchar()) != EOF)// �߼��ж����ڸ�ֵ ,ctrl+z �˳�����
//	{
//		if (ch >= 'a' && ch <= 'z')
//		{
//			putchar(ch - 32);
//			getchar();//���ڴ��������е�\n
//			printf("\n");
//		}
//		if (ch >= 'A' && ch <= 'Z')
//		{
//			putchar(ch + 32);
//			getchar();//���ڴ��������е�\n
//			printf("\n");
//		}
//
//	}
//	return 0;
//}

// �����ô����\n �����޷�ֹͣ
//int main()
//{
//    char ch = '0';
//    while (scanf("%c", &ch)!=EOF)// sacnf�ܱ������\n  ��ʵ����scanf����⻹���Ǻ�͸��
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

//int main()// ����putchar�������÷���
//{
//	char ch = '0';
//	scanf("%c", &ch);
//	putchar(ch-32);
//	printf("%c", ch);
//	return 0;
//}

//// �����ô����\n �����޷�ֹͣ
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
//        printf("\n");// ��ʹ�������û��̫���𣬵����ǻس�������
//    }
//    return 0;
//}