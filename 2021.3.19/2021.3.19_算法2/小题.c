#include"Head.h"

//// float�ķ�Χ�д����
//int main()
//{
//	float a= 12345678901234567890;
//	double b = 12345678901234567890;
//	printf("%f\n%f", a,b);
//}

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
//// ����ˮ�ɻ�
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

//#include<stdio.h>
//int main()
//{
//    int a = 0, b = 0;
//    scanf("%d%d", &a, &b);
//    printf("%d", (a * b) % 100); // �Ǽӷ���������
//    return 0;
//}

//// floatǿ��ת��Ϊint
//int main()
//{
//	float a= 1114.1243;
//	int b = a;// ���У�����
//	//int b = (int)a;
//	printf("%d", b);
//	return 0;
//}
//int main() // ������ǿ��ת��Ҳ��
//{
//    int a;
//    scanf("%d", &a);
//    printf("%d", a % 10);
//    return 0;
//}

//// �ܳɼ���ƽ����
//#include<stdio.h>
//int main()
//{
//    float c = 0, m = 0, e = 0;
//    scanf("%f%f%f", &c, &m, &e);// ����ʱ��ʽ�������ڶ����Ʊ��벻ͬ�����´�������ݣ�����������
//    printf("%.2f %.2f", c + m + e, (c + m + e) / 3);
//    return 0;
//}
//// ���������б�Ҫ�����о�
//int main()
//{
//	int a = 0;
//	scanf("%f", &a);// ��Ȼͬ����4���ֽڣ����Ǵ�ȡ��Ȼ���ǰ���float���͵ķ�ʽ
//	printf("%f", a);
//	return 0;
//}

//// ����������
//#include<stdio.h>
//int main()
//{
//    int n, h, m;
//    while (EOF != scanf("%d %d %d", &n, &h, &m)) printf("%d", n - (m / h) - (m % h));
//}// ����Ϊ����Ǵ��
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



//// %c ���տո��֪ʶ��
//int main()
//{
//	char ch = '0',c='0';
//	scanf("%c %c", &ch, &c);
//	printf("**%c**\n**%c**", ch, c);
//}

//// ʮ�����ƺͰ˽������ڴ��еĴ洢��ʽ��һ����ֻ�����������ĸ�ʽ��һ������
//int main()
//{
//	int a = 0x12, b = 05;
//	printf("%d", a + b);
//	return 0;
//}

//// ����
//#include<stdio.h>
// // ����㷨
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
//        printf("%.2f", price);
//    return 0;
//}


//#include<stdio.h>
//int main()
//{
//    char ch = '0';
//    int count_A = 0;
//    int count_B = 0;
//    while ((ch = getchar()) != '0') // �������ʲô
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

//// ���ж�ȡ�ķ�ʽ
//#include<stdio.h>
//#include<string.h>
// // ����һ�еķ���
//int main()
//{
//    char arr[100] = { 0 };
//    gets(arr);
//    int i = 0;
//    int count = 0;
//    while ( arr[i] != '0'&&arr[i]!=0) //���û������'0'��������ַ���������
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

//// ����if-else�Ƿ���һ�����
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


//// �ո�%c�ܹ���������ֵǰ��Ŀո�
//#include<stdio.h>
//// �ַ�����Ӧ��
//int main()
//{
//	char arr[] = { "AaEeIiOoUu" };
//	int ch = '0';
//	while (~scanf(" %c", &ch))// �ո�%c�ܹ���������ֵǰ��Ŀո�
//								//�ո����ڻ���������ŵ�\n
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
//	while (~scanf("%c\n", &ch))// ֱ�ӽ�\n�����������ĸ�ʽ
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
//// ����isalpha���������Ҳ����µķ�ʽ����\n
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



//#include<stdio.h>
//// �����жϴ�Сд�Ŀ⺯��
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