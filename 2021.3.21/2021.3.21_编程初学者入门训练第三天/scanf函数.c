#include"Head.h"

//****************************
//   1.scanf("%c"&ch); 会输入空格和换行符
//   2.ch=getchar(); 会输入空格和\n(不过注意getchar是回车才有反应）

// 矩阵变换
//int main()
//{
//    // 输入数据
//    int n = 0, m = 0;
//    scanf("%d%d", &n, &m);
//    int i = 0, j = 0;
//    int arr[10][10] = { 0 };
//    for (i = 0; i < n; i++)
//        for (j = 0; j < m; j++)
//            scanf("%d", &arr[i][j]);
//    // 做矩阵交换
//    int k = 0, a = 0;
//    scanf("%d", &k);
//    for (a = 0; a < k; a++)
//    {
//        char t = '0';
//        getchar();// 需要处理换行符
//        t = getchar();
//        int x1 = 0, x2 = 0;
//        scanf("%d%d", &x1, &x2);
//        // 这里统一输入即可scanf("%c%d%d",&ch, &x1, &x2);
//        if (t == 'r')
//            for (j = 0; j < m; j++)
//            {
//                int tmp = 0;
//                tmp = arr[x1 - 1][j];// 题目中行数与数组中的行数不一样
//                arr[x1 - 1][j] = arr[x2 - 1][j];
//                arr[x2 - 1][j] = tmp;
//            }
//        if (t == 'c')// 题目也会给其他非相关字符
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

//// 验证第一条---会输入空格和\n
//int main()-----
//{
//	char ch = 0;
//	scanf("%c", &ch);
//	putchar(ch);
//}
//// 验证第二条
//int main()
//{
//	char ch = '0';
//	ch = getchar();
//	putchar(ch);
//}