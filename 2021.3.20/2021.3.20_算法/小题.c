#include"Head.h"

// BC-51 �������ж�
//int main()
//{
//    int a = 0, b = 0, c = 0;
//    while (~scanf("%d%d%d", &a, &b, &c))
//    {
//        if (a + b <= c || a + c <= b || b + c <= a)
//            printf("Not a triangle!\n");
//        else
//        {
//            if (a == b && a == c && b == c)// if(a==b&&a==c) û��Ҫb==c�˰�
//                printf("Equilateral triangle!\n");
//            else
//            {
//                if (((a == b) + (a == c) + (b == c)) == 1)
//                    // Ҳ����д��(a==b||c==b||a==c)
//                    // ��Ϊǰ���Ѿ�ȷ���˵ȱ������ε��������������Զ�ֻ��һ�����ڵ����
//                    printf("Isosceles triangle!\n");
//                else
//                    printf("Ordinary triangle!\n");
//            }
//        }
//    }
//}

//// BC-52 �����������ݳ̶�
//// ���⣺float bmi = weight / (high * high / 10000.0);
//// ���float bmi = weight / high / high * 10000.0;����ͳ�����
//int main()
//{
//    int weight = 0, high = 0;
//    while (~scanf("%d%d", &weight, &high))
//    {
//        float bmi = weight / (high * high / 10000.0);
//        if (bmi < 18.5)
//            printf("Underweight\n");
//        else
//            if (bmi >= 18.5 && bmi <= 23.9)
//                printf("Normal\n");
//            else
//                if (bmi > 23.9 && bmi <= 27.9)
//                    printf("Overweight\n");
//                else
//                    printf("Obese\n");
//    }
//    return 0;
//}

//// BC-54 ����·�����
//// ��˼�룺day++;// Ĭ����28����������ٸı䣻��͹������һ��һ��
//int main()
//{
//    int year = 0, month = 0;
//    while (~scanf("%d%d", &year, &month))
//    {
//        int day = 0;
//        if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
//            day = 31;
//        else
//            if (month == 2)
//            {
//                day = 28;
//                if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
//                    day++;// ��ӱ��д����Ĭ����28����������ٸı�
//            }// ��ֹ�������if���
//            else day = 30;
//        printf("%d\n", day);
//    }
//}

// BC-55 �򵥼�����
// ���⣺float x1 = 0, x2 = 0;// 92*23.3��float���;�Ȼ�����ˣ�float����û���������
//int main()
//{
//    double x1=0,x2=0;// ��float��92.0000*22.3000=2051.5999�����
//    char ch = '0';
//    while (~scanf("%f%c%f", &x1, &ch, &x2))// ����Ӧ�ò��ô���\n
//    {
//        if (ch != '+' && ch != '-' && ch != '/' && ch != '*')
//            printf("invalid operation!\n");
//        else
//            if (ch == '/')
//            {
//                if (x2 == 0)
//                    printf("wrong!division by zero!\n");
//                else
//                    printf("%.4f%c%.4f=%.4f", x1, ch, x2, x1 / x2);
//            }
//            else
//            {
//                double re=0;// ��֪�������� float �᲻�����
//                switch (ch)
//                {
//                case '+':
//                    re = x1 + x2; break;
//                case '*':
//                    re = x2 * x1; break;
//                case '-':
//                    re = x1 - x2; break;
//                }
//                printf("%.4f%c%.4f=%.4f", x1, ch, x2, re);
//            }
//    }
//    return 0;
//}


//// ����������
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//                // ���ù��ɽ������
//                if (i >= j)
//                    printf("%d ", j + 1);// �ӹ۲쵽�Ŀ� ����Ķ�Ӧ������
//                else
//                    printf("  ");
//            printf("\n");
//        }
//    }
//    return 0;
//}
//// ����������
//// �����ܾ�����i��j�Ĺ�ϵ�Ĺ���
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j <= i; j++)// jҲ�Ǹ���i�仯���仯��
//                // ���ù��ɽ������
//                printf("%d ", j + 1);
//            printf("\n");
//        }
//    }
//    return 0;
//}

//// BC-76 ����Ա����-ȥ��һ����߷�һ����ͷ�
//void Exchange(int arr[], int i, int j)
//{
//    int tmp=0;
//    tmp = arr[i];
//    arr[i] = arr[j];
//    arr[j] = tmp;
//}
//int main()
//{
//    // ��ʼ��������ɼ�
//    int arr[7] = { 0 };
//    int i = 0;
//    for (i = 0; i < 7; i++)
//        scanf("%d", &arr[i]);
//    // ð������
//    int j = 0;
//    for (i = 0; i < 7; i++)
//    {
//        for (j = i + 1; j < 7; j++)
//            if (arr[i] < arr[j])
//                Exchange(arr, i, j);
//    }
//    int sum = 0;
//    for (i = 1; i < 6; i++)
//        sum += arr[i];
//    printf("%.2f", sum / 5.0);
//    return 0;
//}

//// BC-77 �������в���һ����
//void Move(int p_arr[], int n,int loc, int* num)
//{
//    int i = 0;
//    for (i = n - 1; i >= loc; i--)
//        p_arr[i + 1] = p_arr[i];
//    p_arr[loc] = *num;
//}
//int main()
//{
//    // ���䶯̬�ڴ沢����
//    int n = 0;
//    scanf("%d", &n);
//    int* p = (int*)malloc(sizeof(int) * (n+1));
//    int i = 0;
//    for (i = 0; i < n ; i++)
//        scanf("%d", p + i);
//
//    // ��������
//    int num = 0;
//    scanf("%d", &num);
//    for (i = 0; i < n ; i++)
//    {
//        if (*(p + i) > num)
//        {
//            Move(p, n, i, &num);
//            break;
//        }
//        else
//            *(p + n) = num;
//    }
//    for (i = 0; i < n + 1; i++)
//        printf("%d ", *(p + i));
//    return 0;
//}
//// �������в���һ����
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    // ��Ϊ˵���������еĳ�������ֱ�ӿ��ٳ���Ϊ51������
//    int arr[51] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//
//    int num = 0;
//    scanf("%d", &num);
//    // �Ƚϲ�����
//    for (i = 0; i < n; i++)
//    {
//        if (arr[i] > num)
//        {
//            int j = 0;
//            for (j = n - 1; j >= i; j--)
//                arr[j + 1] = arr[j];
//            arr[i] = num;
//            break;// һ��������break
//        }
//        else
//            arr[n] = num;
//    }
//    for (i = 0; i < n + 1; i++)
//        printf("%d ", arr[i]);
//    return 0;
//}


// BC-120 С�������������ͷ��
//int Er(long long n)
//{
//    int a = n % 10;
//    int count = 0;
//    while (n /= 10)
//    {
//        if (a != n % 10)
//        {
//            a = n % 10;
//            count++;
//        }
//    }
//    if (count == 1)
//        return 1;
//    else
//        return 0;
//}
//int main()
//{
//    long long n = 0;
//    while (~scanf("%d", &n) && n )
//    {
//        long long j = 2;
//        //for (j = 2; j <= 999999999999; j++)
//        //{
//        //    if (Er(n * j))
//        //    {
//        //        printf("%lld:%lld\n", n, n * j);
//        //        break;
//        //    }
//        //}
//        while(1)
//        {
//            if (Er(n * j))
//            {
//                printf("%lld:%lld\n", n, n * j);
//                break;
//            }
//            j++;
//        }
//    }
//    return 0;
//}
// �������͵Ĳο���
//#include <stdio.h>
//
//#define BASE 10
//
//int judge(long long n)
//{
//    int cnt = 1, d, r;
//    d = n % BASE;
//    n /= BASE;
//    while (n) {
//        r = n % BASE;
//        if (r != d) {
//            if (++cnt > 2) break;
//            d = r;
//        }
//        n /= BASE;
//    }
//    return cnt == 2;
//}
//
//int main(void)
//{
//    long long n, ans, k;
//
//    while (~scanf("%lld", &n) && n) {
//        k = 2;
//        for (;;) {
//            ans = n * k++;
//            if (judge(ans)) break;
//        }
//
//        printf("%lld: %lld\n", n, ans);
//    }
//
//    return 0;
//}
// ��һ���㷨
//#define maxn  10010
//
//int a[maxn], b[maxn];
//
//int m, total, s, t, aptotal, apm, aps, apt, k;
//int n;
//int ck()
//{
//    int p, r;
//    if (total > 5)
//        return 1;
//    p = s;
//    r = t;
//    for (int q = 0; q < m; q++)
//    {
//        p = p * 10 + s;
//    }
//
//    for (int q = 0; q < total - m; q++)
//        p = p * 10;
//    for (int q = 1; q < total - m; q++)
//        r = r * 10 + t;
//    return p + r > n;
//}
//int main()
//{
//    while (scanf("%d", &n), n)
//    {
//        printf("%d: ", n);
//        if (n == 1) {
//            printf("10");
//            continue;
//        }
//        a[0] = 1;
//        b[0] = 1;
//        for (int i = 1; i < 9999; i++)
//            a[i] = (a[i - 1] * 10 + 1) % n;
//        for (int i = 1; i < 999; i++)
//            b[i] = b[i - 1] * 10 % n;
//        for (total = 1, aps = 0; total < 9999; total++) 
//        {
//            k = 0;
//            if ((n % 10 == 0 || n % 25 == 0) && total > 11)
//                k = total - 11;
//            for (m = k; m < total; m++)
//                for (s = 1; s < 10; s++)
//                    for (t = 0; t < (n % 10 ? 10 : 1); t++)
//                        if (t != s && (((long long)a[m]) * b[total - m] * s + a[total - m - 1] * t) % n == 0 && ck() &&
//                            (!aps || s < aps))
//                        {
//                            aptotal = total;
//                            apm = m;
//                            aps = s;
//                            apt = t;
//                        }
//            if (aps)
//                break;
//        }
//        for (int x = 0; x < apm + 1; x++)
//            printf("%d", aps);
//        for (int x = 0; x < aptotal - apm; x++)
//            printf("%d", apt);
//        printf("\n");
//    }
//    return 0;
//}

//#include <iostream>
//using namespace std;
//const int maxn = 10010;   //��ʾ����λ�����ȣ�����Ϊconst�����ɱ�Ĺ̶���С
//
//int a[maxn], b[maxn];
//
//int m, total, s, t, aptotal, apm, aps, apt, k;//������Ҫ�õ��ı�������¼����Ҫ�����С������
//int n;
//bool ck()//����Ϊbool���͵ĺ��������������Ƿ����n
//{
//    int p, r;
//    if (total > 5)//��֦
//        return 1;
//    p = s;
//    r = t;
//    for (int q = 0; q < m; q++)
//    {
//        p = p * 10 + s;
//    }
//
//    for (int q = 0; q < total - m; q++)
//        p = p * 10;
//    for (int q = 1; q < total - m; q++)
//        r = r * 10 + t;
//    return p + r > n;
//}
//int main()
//{
//    while (cin >> n, n)
//    {
//        printf("%d: ", n);
//        if (n == 1) {
//            puts("10");
//            continue;
//        }
//
//        a[0] = 1;
//        b[0] = 1;
//        for (int i = 1; i < 9999; i++)//��ʼ������
//
//            a[i] = (a[i - 1] * 10 + 1) % n;
//        for (int i = 1; i < 999; i++)
//            b[i] = b[i - 1] * 10 % n;
//
//        for (total = 1, aps = 0; total < 9999; total++) {
//            k = 0;
//            if ((n % 10 == 0 || n % 25 == 0) && total > 11)
//                k = total - 11;
//            for (m = k; m < total; m++)
//                for (s = 1; s < 10; s++)
//                    for (t = 0; t < (n % 10 ? 10 : 1); t++)
//                        if (t != s && (((long long)a[m]) * b[total - m] * s + a[total - m - 1] * t) % n == 0 && ck() &&
//                            (!aps || s < aps))
//                        {
//                            aptotal = total;
//                            apm = m;
//                            aps = s;
//                            apt = t;
//                        }
//            if (aps)
//                break;
//        }
//        for (int x = 0; x < apm + 1; x++)
//            cout << aps;
//        for (int x = 0; x < aptotal - apm; x++)
//            cout << apt;
//        cout << endl;
//    }
//    return 0;
//}
