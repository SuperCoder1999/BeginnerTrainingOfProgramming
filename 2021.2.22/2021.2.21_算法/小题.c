#include"Head.h"

//// BC-110 井字棋-----放在VS上运行死循环，但是牛客网上能通过测试
//int main()
//{
//    // 存入数据
//    char arr[3][3] = { 0 };
//    int i = 0, j = 0;
//    for (i = 0; i < 3; i++)
//        for (j = 0; j < 3; j++)
//            scanf(" %c", &arr[i][j]);
//    //判断谁赢了
//    char flag = '0';// 这样就不用分开考虑，直接将‘O'或者'K'赋给flag就行
//    for (i = 0; i < 3; i++)// 遍历行
//        if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
//            flag = arr[i][0];
//    for (j = 0; j < 3; j++)// 遍历列
//        if (arr[0][j] == arr[1][j] && arr[0][j] == arr[2][j])
//            flag = arr[0][j];
//    if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])// 正对角线
//        flag = arr[0][0];
//    else
//        if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])// 反对角线
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
    // 存入数据
    char arr[3][3]={0};
    int i=0,j=0;
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            scanf("%c ",&arr[i][j]);
    //判断谁赢了
    char flag='0';// 这样就不用分开考虑，直接将‘O'或者'K'赋给flag就行
    for(i=0;i<3;i++)// 遍历行
        if(arr[i][0]==arr[i][1]&&arr[i][0]==arr[i][2])
            flag=arr[i][0];
    for(j=0;j<3;j++)// 遍历列
        if(arr[0][j]==arr[1][j]&&arr[0][j]==arr[2][j])
            flag=arr[0][j];
    if(arr[0][0]==arr[1][1]&&arr[0][0]==arr[2][2])// 正对角线
        flag=arr[0][0];
    else
        if(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0])// 反对角线
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
//int main() // -----对行列判断进行优化，目标是在嵌套循环内直接实现
//{
//    // 存入数据
//    char arr[3][3] = { 0 };
//    int i = 0, j = 0;
//    for (i = 0; i < 3; i++)
//        for (j = 0; j < 3; j++)
//            scanf("%c ", &arr[i][j]);// 和上面的算法相比较来看，这里是在%c后面加的空格，所以，空格能吸收\n换行符！！
//    //判断谁赢了
//    char flag = '0';// 这样就不用分开考虑，直接将‘O'或者'K'赋给flag就行
//
//    //for (i = 0; i < 3; i++)// 遍历行
//    //    if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
//    //        flag = arr[i][0];
//    //for (j = 0; j < 3; j++)// 遍历列
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
//    // 双对角线
//    if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])// 正对角线
//        flag = arr[0][0];
//    else
//        if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])// 反对角线
//            flag = arr[1][1];
//    // 判断谁赢了
//    if (flag == 'K')
//        printf("KiKi wins!");
//    else
//        if (flag == 'B')
//            printf("BoBo wins!");
//        else
//            printf("No winner!");
//    return 0;
//}
//int main() // -----对行列判断进行优化，目标是在嵌套循环内直接实现
//{
//    // 存入数据
//    char arr[3][3] = { 0 };
//    int i = 0, j = 0;
//    for (i = 0; i < 3; i++)
//        for (j = 0; j < 3; j++)
//            scanf("%c ", &arr[i][j]);
//    //判断谁赢了
//    char flag = '0';// 这样就不用分开考虑，直接将‘O'或者'K'赋给flag就行
//    
//    //for (i = 0; i < 3; i++)// 遍历行
//    //    if (arr[i][0] == arr[i][1] && arr[i][0] == arr[i][2])
//    //        flag = arr[i][0];
//    //for (j = 0; j < 3; j++)// 遍历列
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
//    // 双对角线
//    if (arr[0][0] == arr[1][1] && arr[0][0] == arr[2][2])// 正对角线
//        flag = arr[0][0];
//    else
//        if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])// 反对角线
//            flag = arr[1][1];
//    // 判断谁赢了
//    if (flag == 'K')
//        printf("KiKi wins!");
//    else
//        if (flag == 'B')
//            printf("BoBo wins!");
//        else
//            printf("No winner!");
//    return 0;
//}



//// BC-111 小乐乐与进制转换------求二进制的方法有些模糊，该复习一下
//int main()
//{
//    int n = 0;
//    int arr[100000] = { 0 };// 题目中整数n<=10^9，所以算法有缺陷
//    scanf("%d", &n);
//    // 按照十进制和二进制的计算方法
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
//int main(void)----别人的算法
//{
//    int num = 0, i = 0, j = 0, tem, temy = 0;
//    int a[20] = { 0 };
//    scanf("%d", &num);
//    for (i = 0; num; i++)
//    {
//        a[i] = num % 6;
//        num /= 6;// 这里对应for循环中的条件
//    }
//    for (j = i - 1; j >= 0; j--)
//    {
//        printf("%d", a[j]);
//    }
//    return 0;
//}
// 确定数组前0会不会输出------（好像在输出对角线图形的那一节记错了- 当时应该是只有满足了if条件才输出，否则不会输出
//int main(void)
//{
//    int num = 0, i = 0, j = 0, tem, temy = 0;
//    int a[6] = { 0,1,2,3,4,0 };
//
//    for (j = 5; j >= 0; j--)// 数组中如果前面几个输出了0 会显示
//    {
//        printf("%d", a[j]);
//    }
//    return 0;
//}

//// BC-112 小乐乐求和
//int main()
//{
//    int n;
//    scanf("%d", &n);
//    long long sum=0;
//    // int sum = 0;// 存储溢出
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        sum += i;// sum+=pow(1,i); 题目有些模糊
//    }
//    //printf("%d",(1+n)*n/2);// 大可以这么做
//	  printf("%lld",sum);
//    //printf("%d", sum); // 存储溢出
//    return 0;
//}

//// 演草纸 
//int main()
//{
//	printf("%d", 10000 % 60);
//}

//// BC-113 小乐乐定闹钟  ----  时间题，蓝桥杯喜欢考的
//int main()
//{
//    // 输入当前时间
//    int hour_n = 0, minute_n = 0;
//    scanf("%d:%d", &hour_n, &minute_n);
//    // 输入睡眠时长
//    int s = 0;
//    scanf("%d", &s);
//    // 睡眠时间转换为小时与分钟
//    int hour_s = 0, minute_s = 0;
//    hour_s = s / 60;
//    minute_s = s % 60;// minute_n = s % 60;  这里大意了
//    // 计算闹钟设定时刻
//    int hour_get = 0;
//    int minute_get = 0;
//    minute_get = (minute_n + minute_s) % 60;
//    hour_get = (hour_n + hour_s + (minute_n + minute_s) / 60) % 24;// 取余24是得到第二天的起床时刻
//    printf("%02d:%02d", hour_get, minute_get);
//    return 0;
//}

//// BC-115 小乐乐与欧几里得--辗转相除法求最大公约数和最小公倍数------待整理
//int main()
//{
//    int n = 0, m = 0;
//    scanf("%d%d", &n, &m);
//    // 欧几里得（辗转相除法）
//    int a = 0, b = 0, mod = 1;
//    if (n > m)
//    {
//        a = n;
//        b = m;
//    }
//    else// 省略了，会出错
//    {
//        b = n;
//        a = m;
//    }
//    while (mod = a % b)// 如果这里b是最大公因数，那么mod=1了，所以最终的最大公约数是b
//    {
//        a = b;
//        b = mod;
//    }
//    printf("%lld", b + n * m / b);
//}
//int main()//----------这里a,b,n,m没有定义为long long 就对123124 1253728的输入输出错误结果，整形提升什么的可能还没太理解
//{
//    int n = 0, m = 0;
//    scanf("%d%d", &n, &m);
//    // 欧几里得（辗转相除法）
//    int a = 0, b = 0, mod = 1;// 防止找不到，先将
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
//    while (mod = a % b)// 如果这里b是最大公因数，那么mod=1了，所以最终的最大公约数是b
//    {
//        a = b;
//        b = mod;
//    }
//    printf("%lld", b + n * m / b);
//}

//// BC-116 小乐乐改数字-------如果题目给的数字不是那么长，或许数组（可以查看一下数组的最大长度）就可以做，好像牛客网的长度和VS的不同
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
//    // 由于取余只能倒着输出，但是%位数-1之后再除的得到的就是第一位。
//    // 想到之前转换进制的那一题，或许能用
//    int n = 0;
//    scanf("%d", &n);
//    // 
//
//    // 求位数-----可以做成模板
//    int a = n;
//    int count = 1;
//    while (a /= 10)
//        count++;
//    //printf("%d\n", count);这是为了调试才看的
//    // 
//    int i = 0;
//    int flag = 0;
//    for (i = 0; i < count; i++)
//    {
//        int mod = 0;
//        //mod = n % ((int)pow(10, count - 1 - i));----double强制转换为int数值变换了
//        //if (n /= ((int )pow(10, count - 1 - i)))
//        // 创建自己的pow函数
//        int w = My_pow(10, count - 1 - i);
//        mod = n % w;
//        //if ((n /= w)%2)
//        //    printf("1");
//        //else
//        //    printf("0");// 222222221 的答案是1 但是我输出了许多0.所以采用做标记的方式去掉这些0
//        
//        if ((n /= w) % 2)
//        {
//            printf("1");
//            flag = 1;
//        }
//        else
//        {
//            if(flag==1)
//                printf("0");// 当flag=1的时候就是有了非零的首位
//        }
//
//        n = mod;
//    }
//}

//// BC-117 小乐乐走台阶----斐波那契数列 其实对于走台阶这种题我还没有理解深入
//#include<stdio.h>
//// 按照简便方法---斐波那契数列做了------这题应该好好思考，为什么。还有这一类题需要整理
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int x1 = 1, x2 = 1, rsl = 0;;
//    int i = 0;
//
//    for (i = 2; i <= n; i++)// 往后移动
//    {
//        rsl = x1 + x2;
//        x1 = x2;
//        x2 = rsl;
//    }
//    printf("%d", rsl);
//}

//// BC-118 小乐乐与排序  姑且用两道题的合体来解这题--排序+去重
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
//        scanf("%d", &arr[i]);// 错误思想-----输入时每个数字后带有\n，所以字符串中必须有\n
//    // 排序
//    Bubble(arr, n);
//    // 去重
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

//// BC-119 小乐乐与字符串 是一个数据结构与算法 内的算法

//// BC-123 小乐乐找最大数
// 方法一：冒泡排序；方法二：数组边输入边排序；----有问题，这里定义的max取值无法确定
// 方法三：两两比较
//int main()
//{
//    int arr[4];
//    int i = 0;
//    // int max=0; 取值无法确定
//    for (i = 0; i < 4; i++)
//        scanf("%d", &arr[i]);
//    int max = arr[0];
//    for (i = 1; i < 4; i++)
//        max = max > arr[i] ? max : arr[i];// 新思维
//          // max>arr[i]?max:arr[i];需要赋值的！
//    printf("%d", max);
//    return 0;
//}

//// BC-136 KiKi去重整数并排序  ---  和上面的去重排序一样。不过这里有范围所以可以用桶排序
//// 由于每个数字都大于1 所以可以采用桶排
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
//    for (i = 0; i <= max; i++)// 这里i需要等于max，因为max一定是由数字的
//        if (arr[i])
//            printf("%d ", arr[i]);
//    return 0;
//}