#include"Head.h"

// 没有规律可循的图形，行列输出的数量变化一定要留意

//    ****** 规律  *****//
//   对角线和反对角线中  i和j  有着某种关系

// 注意：
//   如果是在一个矩形中含有对角线，则可以按照规律做；

//   如果只要求输出形如下的图形，则也可以按照一行一列取做，列中的个数和行数有明显关系
//*
//**
//***
//****




//// BC-58 直角三角形图案
////*
////**
////***
////****
//// 规律：
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++)
//        {
//            int count = 0;
//            // 利用规律
//            for (j = 0; j <= n; j++)
//            {
//                if (i >= j)
//                    printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//// BC-60 带空格直角三角形图案--即矩形中的对角线
////     *
////   * *
//// * * *
//int main()// ---  算法 ： 一行一行地输出
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0, k = 0;
//        for (i = 0; i < n; i++)
//        {
//            // 打印空格
//            for (j = 0; j < n - i - 1; j++)
//                printf("  ");
//            // 打印 * 
//            for (k = 0; k <= i; k++)// k和j比较
//            {
//                printf("*");
//                if (k < i)
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}
// // 找规律
//  0 1 2 3 4
//0         * |
//1       * * |
//2     * * * |
//3   * * * * |
//4 * * * * * |->i+j<n-1
//int main()---规律算法
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//                if (i + j < n - 1) // 找规律
//                    printf("  ");
//                else
//                    printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//// BC-59 翻转直角三角形图案（有待优化成规律算法）
////*****
////****
////***
////**
////*
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++)
//        {
//            int count = 0;
//            for (j = 0; j < n - i; j++)// 重点！！！！
//                if (count == 0)
//                {
//                    printf("*");
//                    if (j < n - 1 - i)// 最后一个不打印空格的方法二（方法一是用计数器）
//                        printf(" ");
//                }
//                else
//                    printf(" *");
//            printf("\n");
//        }
//    }
//}

//// BC-66 反斜线形图案
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//                if (i == j)
//                    printf("*");
//                else// 题目暗含在一个矩形内打印反斜线的条件（其实如果不给一个矩形内，则 * 只会全部打印在第一列，就没有意义了
//                    printf(" ");
//            printf("\n");
//        }
//    }
//    return 0;
//}


//// BC-75 数字三角形
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//                // 利用规律进行输出
//                if (i >= j)
//                    printf("%d ", j + 1);// 从观察到的看 输出的数对应着列数
//                else
//                    printf("  ");
//            printf("\n");
//        }
//    }
//    return 0;
//}
//// 普通算法
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j <= i; j++)// j也是跟着i变化而变化的
//                // 利用规律进行输出
//                printf("%d ", j + 1);
//            printf("\n");
//        }
//    }
//    return 0;
//}
//// 对角线规律的灵活运用
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        // 用规律来打印全部
//        int i = 0, j = 0;
//        for (i = 0; i < 2 * n + 1; i++)//行数
//        {
//            for (j = 0; j <= n; j++)// 列数
//// 规律：割除第一列，之后的便是两个三角形     ----------这里，不用割除第一列也能按规律做
//// 条件：1.上半部分i+j<=n  2.下半部分：i-j>=n
//if (j == 0 || (i + j <= n) || (i >= n && i - j >= n))
//printf("* ");
//else
//printf("  ");
//            printf("\n");// 不是数组，需要手动换行
//        }
//    }
//}
// BC-64 打印K的普通算法
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        // 用规律来打印上半部分
//        int i = 0, j = 0;
//        for (i = 0; i <= n; i++)
//        {
//            for (j = 0; j <= n; j++)
//                if (i + j <= n)
//                    printf("* ");
//            printf("\n");// 不是数组，需要手动换行
//        }
//        // 下半部分
//        // 采用分行
//        for (i = 0; i < n; i++)
//        {
//            // 打印 * 
//            for (j = 0; j <= i + 1; j++)
//                printf("* ");
//            // 换行
//            printf("\n");
//        }
//    }
//}

//// BC-67 正斜线形图案
////   *
////  *
//// *
////*
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0;
//        // 分行
//        for (i = 0; i < n; i++)
//        {
//            // 每一行
//            for (j = 0; j < n; j++)
//            {
//                // 利用规律：x+y=3来输出
//                if (i + j == n - 1)
//                    printf("*");
//                else
//                    printf(" ");//这个必须有，如果没有空格，*只会放在第一列
//            }
//            printf("\n");
//        }
//    }
//}

//// BC-68 X形图案
//// 正反斜线的综合运用
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                if (i == j || i + j == n - 1)// 交汇点处不会有影响
//                    printf("*");
//                else
//                    printf(" ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}

//// BC-70 空心三角形图案
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0;
//        // 分行输出
//        for (i = 0; i < n; i++)
//        {
//            // 构建每一列（其实这种按规律输出的，
//            //并没有按行列来，只是按着行列往下走，遇到满足条件的就会输出)
//            for (j = 0; j < n; j++)
//            {
//                if (j == 0 || i == j || i == n - 1)
//                    printf("* ");// 斜边后面有空格，将i==j单独输出就行了
//                else
//                    printf("  ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//// BC-61 金字塔图案--无规律可循，只能仔细考虑每行数量了
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0, k = 0;
//        // 从行开始
//        for (i = 0; i < n; i++)
//        {
//            // 打印空格
//            for (j = 0; j < n - i - 1; j++)
//                printf(" ");
//            // 打印 *
//            for (k = 0; k <= i; k++)
//                printf("* ");
//            // 换行
//            printf("\n");
//        }
//    }
//    return 0;
//}
//// BC-62 翻转金字塔图案--和金字塔图案一样，每行数量有些乱（可以多练练）
//#include<stdio.h>
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0, k = 0;
//        // 分行
//        for (i = 0; i < n; i++)
//        {
//            // 打印空格
//            for (j = 0; j < i; j++)
//                printf(" ");
//            // 打印 *
//            for (k = 0; k < n - i; k++)
//                printf("* ");
//            // 换行
//            printf("\n");
//        }
//    }
//    return 0;
//}

//// BC-63 菱形图案--需要分上下部分（更值得练习）
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0, k = 0;
//        // 打印上面部分
//        // 分行
//        for (i = 0; i < n; i++)
//        {
//            // 打印空格
//            for (j = i; j < n; j++)
//                printf(" ");
//            // 打印 * 
//            for (k = 0; k <= i; k++)
//                printf("* ");
//            // 换行
//            printf("\n");
//        }
//        // 打印对称轴
//        for (i = 0; i <= n; i++)
//            printf("* ");
//        // 对称轴后面的换行符别忘了
//        printf("\n");
//        // 打印下半部分
//        // 分行
//        for (i = 0; i < n; i++)
//        {
//            // 打印空格
//            for (j = 0; j <= i; j++)
//                printf(" ");
//            // 打印 *
//            for (k = 0; k < n - i; k++)// 打印的* 要和行数保持关系
//                printf("* ");
//            printf("\n");
//        }
//    }
//    return 0;
//}

//// BC-64 箭形图案
//// 看到一个较为新颖的
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        int i = 0, j = 0, k = 0;
//        // 打印上半部分
//        // 分行
//        for (i = 0; i < n; i++)
//        {
//            // 空格
//            for (j = 0; j < n - i; j++)// // 每行输出元素个数都和行数有关
//                printf("  ");
//            // 打印 * 
//            for (k = 0; k <= i; k++)
//                printf("*");
//            // 换行
//            printf("\n");
//        }
//        // 打印对称轴
//        for (i = 0; i < n + 1; i++)
//            printf("*");
//        // 打印对称轴下面的 需要提前换行
//        printf("\n");
//        // 打印下半部分
//        // 换行
//        for (i = 0; i < n; i++)
//        {
//            // 打印空格
//            for (j = 0; j <= i; j++)
//                printf("  ");
//            // 打印 *
//            for (k = 0; k < n - i; k++)
//                printf("*");
//            // 换行
//            printf("\n");
//        }
//    }
//    return 0;
//}
///*
//#include<stdio.h>
//int main()
//{
//    int n;
//    while(scanf("%d",&n)!=EOF)
//    {
//        int space=2*n;
//        for(int i=1; i<=n+1; i++)
//        {
//            for(int j=0; j<space; j++)
//                printf(" ");
//            for(int k=0; k<i; k++)
//                printf("*");
//            printf("\n");
//            space=space-2;
//        }
//         space=2;
//        for(int i=n; i>=1; i--)// 下半部分比上半部分少一行
//        {
//            for(int j=0; j<space; j++)
//                printf(" ");
//            for(int k=0; k<i; k++)
//                printf("*");
//            printf("\n");
//            space=space+2;
//        }
//    }
//    return 0;
//}
//*///这个方法也不错


//// BC-69 空心正方形图案--也是有些许规律的，而不是单行单行地输出
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))
//	{
//		int i = 0, j = 0;
//		// 分行输出
//		for (i = 0; i < n; i++)
//		{
//			// 每一列
//			for (j = 0; j < n; j++)
//			{
//				// 规律：边框的i、j值固定（相交的地方不会重复输出）
//				if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
//					printf("* ");// 这样最后一列后面就有了空格（其实让j==n-1单独输出就可以了）
//				else
//					printf("  ");
//			}
//			printf("\n");
//		}
//	}
//	return 0;
//}