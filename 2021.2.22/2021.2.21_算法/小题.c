#include"Head.h"

//// BC-110 ������-----����VS��������ѭ��������ţ��������ͨ������
//int main()
//{
//    // ��������
//    char arr[3][3] = { 0 };
//    int i = 0, j = 0;
//    for (i = 0; i < 3; i++)
//        for (j = 0; j < 3; j++)
//            scanf(" %c", &arr[i][j]);
//    //�ж�˭Ӯ��
//    char flag = '0';// �����Ͳ��÷ֿ����ǣ�ֱ�ӽ���O'����'K'����flag����
//    for (i = 0; i < 3; i++)// ������
//        if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
//            flag = arr[i][0];
//    for (j = 0; j < 3; j++)// ������
//        if (arr[0][j] == arr[1][j] && arr[0][j] == arr[2][j])
//            flag = arr[0][j];
//    if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])// ���Խ���
//        flag = arr[0][0];
//    else
//        if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])// ���Խ���
//            flag = arr[1][1];
//    if (flag == 'K')
//        printf("KiKi wins!");
//    else
//        if (flag == 'B')
//            printf("BoBo wins!");
//        else
//            printf("No winner!");
//    return 0;
//}
/*int main()
{
    // ��������
    char arr[3][3]={0};
    int i=0,j=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%c ",&arr[i][j]);
    //�ж�˭Ӯ��
    char flag='0';// �����Ͳ��÷ֿ����ǣ�ֱ�ӽ���O'����'K'����flag����
    for(i=0;i<3;i++)// ������
        if(arr[i][0]==arr[i][1]&&arr[i][0]==arr[i][2])
            flag=arr[i][0];
    for(j=0;j<3;j++)// ������
        if(arr[0][j]==arr[1][j]&&arr[0][j]==arr[2][j])
            flag=arr[0][j];
    if(arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2])// ���Խ���
        flag=arr[0][0];
    else
        if(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0])// ���Խ���
            flag=arr[1][1];
    if(flag=='K')
        printf("KiKi wins!");
    else
        if(flag=='B')
            printf("BoBo wins!");
    else
        printf("No winner!");
    return 0;
}*/
//int main() // -----�������жϽ����Ż���Ŀ������Ƕ��ѭ����ֱ��ʵ��
//{
//    // ��������
//    char arr[3][3] = { 0 };
//    int i = 0, j = 0;
//    for (i = 0; i < 3; i++)
//        for (j = 0; j < 3; j++)
//            scanf("%c ", &arr[i][j]);// ��������㷨��Ƚ���������������%c����ӵĿո����ԣ��ո�������\n���з�����
//    //�ж�˭Ӯ��
//    char flag = '0';// �����Ͳ��÷ֿ����ǣ�ֱ�ӽ���O'����'K'����flag����
//
//    //for (i = 0; i < 3; i++)// ������
//    //    if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
//    //        flag = arr[i][0];
//    //for (j = 0; j < 3; j++)// ������
//    //    if (arr[0][j] == arr[1][j] && arr[0][j] == arr[2][j])
//    //        flag = arr[0][j];
//
//    for (i = 0; i < 3; i++)
//        for (j = 0; j < 3; j++)
//        {
//            if (arr[0][j] == arr[1][j] && arr[0][j] == arr[2][j])
//                flag = arr[0][j];
//            if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
//                flag = arr[i][0];
//        }
//    // ˫�Խ���
//    if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])// ���Խ���
//        flag = arr[0][0];
//    else
//        if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])// ���Խ���
//            flag = arr[1][1];
//    // �ж�˭Ӯ��
//    if (flag == 'K')
//        printf("KiKi wins!");
//    else
//        if (flag == 'B')
//            printf("BoBo wins!");
//        else
//            printf("No winner!");
//    return 0;
//}
//int main() // -----�������жϽ����Ż���Ŀ������Ƕ��ѭ����ֱ��ʵ��
//{
//    // ��������
//    char arr[3][3] = { 0 };
//    int i = 0, j = 0;
//    for (i = 0; i < 3; i++)
//        for (j = 0; j < 3; j++)
//            scanf("%c ", &arr[i][j]);
//    //�ж�˭Ӯ��
//    char flag = '0';// �����Ͳ��÷ֿ����ǣ�ֱ�ӽ���O'����'K'����flag����
//    
//    //for (i = 0; i < 3; i++)// ������
//    //    if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
//    //        flag = arr[i][0];
//    //for (j = 0; j < 3; j++)// ������
//    //    if (arr[0][j] == arr[1][j] && arr[0][j] == arr[2][j])
//    //        flag = arr[0][j];
//
//    for(i=0;i<3;i++)
//        for (j = 0; j < 3; j++)
//        {
//            if (arr[0][j] == arr[1][j] && arr[0][j] == arr[2][j])
//                flag = arr[0][j];
//            if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
//                flag = arr[i][0];
//        }
//
//    // ˫�Խ���
//    if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])// ���Խ���
//        flag = arr[0][0];
//    else
//        if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])// ���Խ���
//            flag = arr[1][1];
//    // �ж�˭Ӯ��
//    if (flag == 'K')
//        printf("KiKi wins!");
//    else
//        if (flag == 'B')
//            printf("BoBo wins!");
//        else
//            printf("No winner!");
//    return 0;
//}



//// BC-111 С���������ת��------������Ƶķ�����Щģ�����ø�ϰһ��
//int main()
//{
//    int n = 0;
//    int arr[100000] = { 0 };// ��Ŀ������n<=10^9�������㷨��ȱ��
//    scanf("%d", &n);
//    // ����ʮ���ƺͶ����Ƶļ��㷽��
//    int i = 0;
//    do {
//        arr[i] = n % 6;
//        //if (n / 6 == 1)
//            //arr[++i] = 1;
//        //if(n/6==0)
//            //arr[++i]=0;
//        i++;
//    } while (n /= 6);
//    for (i -= 1; i >= 0; i--)
//        printf("%d", arr[i]);
//}
//int main(void)----���˵��㷨
//{
//    int num = 0, i = 0, j = 0, tem, temy = 0;
//    int a[20] = { 0 };
//    scanf("%d", &num);
//    for (i = 0; num; i++)
//    {
//        a[i] = num % 6;
//        num /= 6;// �����Ӧforѭ���е�����
//    }
//    for (j = i - 1; j >= 0; j--)
//    {
//        printf("%d", a[j]);
//    }
//    return 0;
//}
// ȷ������ǰ0�᲻�����------������������Խ���ͼ�ε���һ�ڼǴ���- ��ʱӦ����ֻ��������if��������������򲻻����
//int main(void)
//{
//    int num = 0, i = 0, j = 0, tem, temy = 0;
//    int a[6] = { 0,1,2,3,4,0 };
//
//    for (j = 5; j >= 0; j--)// ���������ǰ�漸�������0 ����ʾ
//    {
//        printf("%d", a[j]);
//    }
//    return 0;
//}

//// BC-112 С�������
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    long long sum=0;
//    // int sum = 0;// �洢���
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        sum += i;// sum+=pow(1,i); ��Ŀ��Щģ��
//    }
//    //printf("%d",(1+n)*n/2);// �������ô��
//	  printf("%lld",sum);
//    //printf("%d", sum); // �洢���
//    return 0;
//}

//// �ݲ�ֽ 
//int main()
//{
//	printf("%d", 10000 % 60);
//}

//// BC-113 С���ֶ�����  ----  ʱ���⣬���ű�ϲ������
//int main()
//{
//    // ���뵱ǰʱ��
//    int hour_n = 0, minute_n = 0;
//    scanf("%d:%d", &hour_n, &minute_n);
//    // ����˯��ʱ��
//    int s = 0;
//    scanf("%d", &s);
//    // ˯��ʱ��ת��ΪСʱ�����
//    int hour_s = 0, minute_s = 0;
//    hour_s = s / 60;
//    minute_s = s % 60;// minute_n = s % 60;  ���������
//    // ���������趨ʱ��
//    int hour_get = 0;
//    int minute_get = 0;
//    minute_get = (minute_n + minute_s) % 60;
//    hour_get = (hour_n + hour_s + (minute_n + minute_s) / 60) % 24;// ȡ��24�ǵõ��ڶ������ʱ��
//    printf("%02d:%02d", hour_get, minute_get);
//    return 0;
//}

//// BC-115 С������ŷ�����--շת����������Լ������С������------������
//int main()
//{
//    int n = 0, m = 0;
//    scanf("%d%d", &n, &m);
//    // ŷ����ã�շת�������
//    int a = 0, b = 0, mod = 1;
//    if (n > m)
//    {
//        a = n;
//        b = m;
//    }
//    else// ʡ���ˣ������
//    {
//        b = n;
//        a = m;
//    }
//    while (mod = a % b)// �������b�������������ômod=1�ˣ��������յ����Լ����b
//    {
//        a = b;
//        b = mod;
//    }
//    printf("%lld", b + n * m / b);
//}
//int main()//----------����a,b,n,mû�ж���Ϊlong long �Ͷ�123124 1253728�������������������������ʲô�Ŀ��ܻ�û̫���
//{
//    int n = 0, m = 0;
//    scanf("%d%d", &n, &m);
//    // ŷ����ã�շת�������
//    int a = 0, b = 0, mod = 1;// ��ֹ�Ҳ������Ƚ�
//    if (n > m)
//    {
//        a = n;
//        b = m;
//    }
//    else
//    {
//        b = n;
//        a = m;
//    }
//    while (mod = a % b)// �������b�������������ômod=1�ˣ��������յ����Լ����b
//    {
//        a = b;
//        b = mod;
//    }
//    printf("%lld", b + n * m / b);
//}

//// BC-116 С���ָ�����-------�����Ŀ�������ֲ�����ô�����������飨���Բ鿴һ���������󳤶ȣ��Ϳ�����������ţ�����ĳ��Ⱥ�VS�Ĳ�ͬ
//My_pow(int x, int y)
//{
//    int i = 0;
//    int rsl = 1;
//    for (i = 0; i < y; i++)
//        rsl *= x;
//    return rsl;
//}
//int main()
//{
//    // ����ȡ��ֻ�ܵ������������%λ��-1֮���ٳ��ĵõ��ľ��ǵ�һλ��
//    // �뵽֮ǰת�����Ƶ���һ�⣬��������
//    int n = 0;
//    scanf("%d", &n);
//    // 
//
//    // ��λ��-----��������ģ��
//    int a = n;
//    int count = 1;
//    while (a /= 10)
//        count++;
//    //printf("%d\n", count);����Ϊ�˵��Բſ���
//    // 
//    int i = 0;
//    int flag = 0;
//    for (i = 0; i < count; i++)
//    {
//        int mod = 0;
//        //mod = n % ((int)pow(10, count - 1 - i));----doubleǿ��ת��Ϊint��ֵ�任��
//        //if (n /= ((int )pow(10, count - 1 - i)))
//        // �����Լ���pow����
//        int w = My_pow(10, count - 1 - i);
//        mod = n % w;
//        //if ((n /= w)%2)
//        //    printf("1");
//        //else
//        //    printf("0");// 222222221 �Ĵ���1 ��������������0.���Բ�������ǵķ�ʽȥ����Щ0
//        
//        if ((n /= w) % 2)
//        {
//            printf("1");
//            flag = 1;
//        }
//        else
//        {
//            if(flag==1)
//                printf("0");// ��flag=1��ʱ��������˷������λ
//        }
//
//        n = mod;
//    }
//}

//// BC-117 С������̨��----쳲��������� ��ʵ������̨���������һ�û���������
//#include<stdio.h>
//// ���ռ�㷽��---쳲�������������------����Ӧ�úú�˼����Ϊʲô��������һ������Ҫ����
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int x1 = 1, x2 = 1, rsl = 0;;
//    int i = 0;
//
//    for (i = 2; i <= n; i++)// �����ƶ�
//    {
//        rsl = x1 + x2;
//        x1 = x2;
//        x2 = rsl;
//    }
//    printf("%d", rsl);
//}

//// BC-118 С����������  ������������ĺ�����������--����+ȥ��
//void Bubble(int arr[], int n)
//{
//    int i = 0, j = 0, flag = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = i + 1; j < n; j++)
//            if (arr[i] > arr[j])
//            {
//                int tmp = 0;
//                tmp = arr[i];
//                arr[i] = arr[j];
//                arr[j] = tmp;
//                flag = 1;
//            }
//        if (flag == 0)
//            break;
//    }
//}
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int i = 0;
//    int arr[100000] = { 0 };
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);// ����˼��-----����ʱÿ�����ֺ����\n�������ַ����б�����\n
//    // ����
//    Bubble(arr, n);
//    // ȥ��
//    printf("%d", arr[0]);
//    int j = 0;
//    for (i = 1; i < n; i++)
//    {
//        for (j = 0; j < i; j++)
//            if (arr[i] == arr[j])
//                break;
//        if (j == i)
//            printf("%d", arr[i]);
//    }
//}

//// BC-119 С�������ַ��� ��һ�����ݽṹ���㷨 �ڵ��㷨

//// BC-123 С�����������
// ����һ��ð�����򣻷���������������������----�����⣬���ﶨ���maxȡֵ�޷�ȷ��
// �������������Ƚ�
//int main()
//{
//    int arr[4];
//    int i = 0;
//    // int max=0; ȡֵ�޷�ȷ��
//    for (i = 0; i < 4; i++)
//        scanf("%d", &arr[i]);
//    int max = arr[0];
//    for (i = 1; i < 4; i++)
//        max = max > arr[i] ? max : arr[i];// ��˼ά
//          // max>arr[i]?max:arr[i];��Ҫ��ֵ�ģ�
//    printf("%d", max);
//    return 0;
//}

//// BC-136 KiKiȥ������������  ---  �������ȥ������һ�������������з�Χ���Կ�����Ͱ����
//// ����ÿ�����ֶ�����1 ���Կ��Բ���Ͱ��
//int main()
//{
//    int arr[100000] = { 0 };
//    int tmp = 0;
//    int i = 0;
//    int n = 0;
//    int max = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//        max = max > tmp ? max : tmp;
//    }
//    for (i = 0; i <= max; i++)// ����i��Ҫ����max����Ϊmaxһ���������ֵ�
//        if (arr[i])
//            printf("%d ", arr[i]);
//    return 0;
//}