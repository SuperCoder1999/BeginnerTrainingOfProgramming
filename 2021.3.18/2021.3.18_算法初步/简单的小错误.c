#include "Head.h"

// ����ϰ
//int main()
//{
//    printf("The size of short is \d bytes.\n", sizeof(short));//���������
//    printf("The size of int is %d bytes.\n", sizeof(int));
//    printf("The size of long is %d bytes.\n", sizeof(long));
//    printf("The size of long long is %d bytes.\n", sizeof(long long));
//    return 0;
//}

// ��ӡһ��"�ɻ�"
//#include<stdio.h>
//int main()
//{
//    printf("     **     \n     **     \n");
//    printf("************\n************\n");
//    printf("     *  *    \n    *  *    \n");//��һ���ո�
//    return 0;
//}

// ʮ����תʮ������
//#include<stdio.h>
//int main()
//{
//    printf("0%o 0X%x", 1234, 1234);
//    printf("0%o 0X%X", 1234, 1234);// 16���ƿ��Դ�дX
//    return 0;
//}

////�������һ����λ���������û�У���������ӵģ�
//int main()
//{
//	int a = 0;
//  sacnf("%d",&a);
//	int i = 0;
//	//for (i = 0; i < 4; i++,a/=10)//���+1
//	for(;a;a/=10)//���+2
//	{
//		printf("%d",a%10);
//	}
//	return 0;
//}


// ʮ������תʮ����
//int main()
//{
//
//  printf("%15d\n", 0xABCDEF);
//    return 0;
//}
//int main()// ��������һ����ʱ���������������̫����
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
//    // int�ķ�Χ��2^31-1 ������9����
//
//    finish = clock();
//    duration = (finish - start);
//    printf("%f seconds\n", duration);
//    return 0;
//}

////��һ��Ϊ��Hello world!��
////�ڶ���Ϊprintf(��Hello world!��)���ú�ķ���ֵ
//int main()
//{
//    printf("\n%d", printf("\"Hello world!\""));// ��Ŀ����ʵ�����������
//    return 0;
//}

//%0md,����ʱ��λ�������0
//int main()
//{
//	printf("%04d", 1);
//	return 0;
//}

//// �����ۼƳ˷�����2^n�������Ʋ�������
//// ����ˣ�����㷨ֻ��������Զ�
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
//        x <<= y-1;// ���������������λ��
//        printf("%d\n", x);
//    }
//    return 0;
//}
////��ȷ�ⷨ
//int main()
//{
//    int y = 0;
//    while (scanf("%d", &y) != EOF)//ţ����������scanfץȡһ���ļ��е�Ԥ����ֵ�����Ի������ļ�������
//        printf("%d\n", 1 << y);// ����ֱ���ÿ⺯��pow
//    return 0;
//}
