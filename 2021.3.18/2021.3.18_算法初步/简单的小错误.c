#include "Head.h"

// BC-3 �����˴�
//int main()
//{
//    printf("The size of short is \d bytes.\n", sizeof(short));//���������
//    printf("The size of int is %d bytes.\n", sizeof(int));
//    printf("The size of long is %d bytes.\n", sizeof(long));
//    printf("The size of long long is %d bytes.\n", sizeof(long long));
//    return 0;
//}

// BC-6 С�ɻ�
//#include<stdio.h>
//int main()
//{
//    printf("     **     \n     **     \n");
//    printf("************\n************\n");
//    printf("     *  *    \n    *  *    \n");//�ύ�󣬽������ԭ���һ���ո�
//    return 0;
//}

// BC-7 ���̶�����
//#include<stdio.h>
//int main()
//{
//    printf("0%o 0X%x", 1234, 1234);
//    printf("0%o 0X%X", 1234, 1234);// 16���ƿ��Դ�дX
//    return 0;
//}

////BC-19 �������һ����λ���������û�У���������ӵģ�
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


// BC-8 ʮ������תʮ����
//int main()
//{
//
//  printf("%15d\n", 0xABCDEF);
//    return 0;
//}
// ������
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

// BC-9 printf�ķ���ֵ
////��һ��Ϊ��Hello world!��
////�ڶ���Ϊprintf(��Hello world!��)���ú�ķ���ֵ
//int main()
//{
//    printf("\n%d", printf("\"Hello world!\""));// ��Ŀ����ʵ�����������
//    return 0;
//}

// BC-12 �ַ�������
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
//        for (k = 0; k <= i; k++)//��ѭ���ǰ뿪���䣬��ѭ����Ҫ����ѭ��һ�������������Ǳ�����
//            printf("%c ", num);
//        printf("\n");
//    }
//    return 0;
//}

// BC-13 ASCII��
//// �ַ�������ķ���
//int main()
//{
//	char str[13]= { 73,32,99,97,110,32,100,111,32,105,116,33,0 };
//	printf("%s", str);
//	return 0;
//}
 //����������������ʱ����Ҫ��ÿ��һASCII�����ת��
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
//	//printf("%s", arr);// %s ������ַ�����ַ����Ȼ%c�ܰ����ַ����int������Ӧ���ַ�
//	return 0;
//}
//// �����ַ�����ķ���
//int main()
//{
//    int i = 0;
//    char arr[12] = { 73,32,99,97,110,32,100,111,32,105,116,33 };
//    for (i = 0; i < 12; i++)
//        printf("%c", arr[i]);//���������ַ�������������ǵü�\0
//    return 0;
//}

// BC-14 ���������������
//// �任˼�����Ҫ��������ô�仯����Ҫ��ԭ���ָ���һ��
//int main()
//{
//	int value = 0;
//	scanf("%d", &value);
//	printf("year=%d\n", value / 10000);// ��10000�õ�ǰ��λ���֣����ǲ�û�иı�value
//	value %= 10000;// ��������ǰ��λ���֣��ں���λ�����в���
//	printf("month=%02d\n", value / 100);// ֻ�õ�ǰ��λ����
//	printf("date=%02d\n", value % 100);// �õ�����λ����
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
//�����е�֪ʶ��
//%0md,����ʱ��λ�������0
//int main()
//{
//	printf("%04d", 1);
//	return 0;
//}

// BC-15 ���ո�ʽ���벢�������
// ���������� ��һ���ļ���


// BC-28 ��Сдת��
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


// BC-29 2��n�η�����
//// �����ۼƳ˷�����Ϊ��������2^n�������Ʋ����������㣩�����ٴ��ݷ����ʺϲ�����2Ϊ�׵Ĵ�������
// ������룺���������󣬴��㷨������num*2 
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

// BC-35 �ж���ĸ
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
//�����ÿ⺯��--isalpha���ǵĻ�����1�����Ƿ���0��
//#include <stdio.h>
//int main()
//{
//    char ch = 0;
//    while (~scanf("%c", &ch))
//    {
//        getchar();// ������ǰҲ���ԣ���Ϊ��ȡ���ˣ����ǲ�Ӱ��ch
//        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//            printf("YES\n");
//        else
//            printf("NO\n");
//    }
//    return 0;
//}

// 2021.4.15 �ع���ϰʱ���ݲ�ֽ

//// int ����ܴ� 1E9
//int main() {
//	int a = 1000000000;// int ����ܴ� 1E9 
//	printf("%d", a);
//	return 0;
//}

// BC-22 ���ܻ������
//int main()
//{
//    double b= 3.156E7;
//    int age;
//    scanf("%d", &age);
//    printf("%f", age * b);
//    return 0;
//}

//// BC-34 ����A+B
//int main()
//{
//    int a = 0, b = 0;
//    scanf("%x%o", &a, &b);// ������ʽ�����ǣ�0x12 05  Ҳ������ 12  5  
//    printf("%d", a + b);
//    return 0;
//}