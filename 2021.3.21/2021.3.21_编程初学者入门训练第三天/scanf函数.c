#include"Head.h"

//****************************
//   1.scanf("%c"&ch); ������ո�ͻ��з�
//   2.ch=getchar(); ������ո��\n(����ע��getchar�ǻس����з�Ӧ��

// ����任
//int main()
//{
//    // ��������
//    int n = 0, m = 0;
//    scanf("%d%d", &n, &m);
//    int i = 0, j = 0;
//    int arr[10][10] = { 0 };
//    for (i = 0; i < n; i++)
//        for (j = 0; j < m; j++)
//            scanf("%d", &arr[i][j]);
//    // �����󽻻�
//    int k = 0, a = 0;
//    scanf("%d", &k);
//    for (a = 0; a < k; a++)
//    {
//        char t = '0';
//        getchar();// ��Ҫ�����з�
//        t = getchar();
//        int x1 = 0, x2 = 0;
//        scanf("%d%d", &x1, &x2);
//        // ����ͳһ���뼴��scanf("%c%d%d",&ch, &x1, &x2);
//        if (t == 'r')
//            for (j = 0; j < m; j++)
//            {
//                int tmp = 0;
//                tmp = arr[x1 - 1][j];// ��Ŀ�������������е�������һ��
//                arr[x1 - 1][j] = arr[x2 - 1][j];
//                arr[x2 - 1][j] = tmp;
//            }
//        if (t == 'c')// ��ĿҲ�������������ַ�
//            for (i = 0; i < n; i++)
//            {
//                int tmp = 0;
//                tmp = arr[i][x1 - 1];
//                arr[i][x1 - 1] = arr[i][x2 - 1];
//                arr[i][x2 - 1] = tmp;
//            }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//            printf("%d ", arr[i][j]);
//        printf("\n");
//    }
//    return 0;
//}

//// ��֤��һ��---������ո��\n
//int main()-----
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	putchar(ch);
//}
//// ��֤�ڶ���
//int main()
//{
//	char ch = '0';
//	ch = getchar();
//	putchar(ch);
//}