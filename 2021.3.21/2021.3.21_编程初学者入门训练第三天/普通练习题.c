#include"Head.h"

//// 图像相似度
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d%d", &m, &n);
//	// 定义数组用于存储第一个图像
//	int arr1[10000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n * m; i++)
//		scanf("%d", &arr1[i]);
//	//// 定义数组用于存储第二个图像
//	//int arr2[10000] = { 0 };
//	//int i = 0;
//	//for (i = 0; i < n * m; i++)
//	//	scanf("%d", &arr2[i]);
//	
//	// 其实可以在不用定义第二个数组用来比较，定义一个变
//	//量就可以，反正在输入的时候也是需要循环输入的
//	int a = 0;
//	float count = 0;
//	for (i = 0; i < n * m; i++)
//	{
//		scanf("%d", &a);
//		if (a == arr1[i])
//			count++;
//	}
//	printf("%.2f", count / (n * m)*100);// 除数要带括号，百分制需要乘以100
//	return 0;
//}

//// 考察字符串
//int main()
//{
//	char name[100] = { 0 };
//	char password[100] = { 0 };
//	while(~scanf("%s%s", name, password))
//	{
//	if (!strcmp(name, "admin") && !strcmp(password, "admin"))// 相等返回0
//		printf("Login Success!\n");
//	else
//		printf("Login Fail!\n");
//	}
//	return 0;
//}

//// 统计成绩
//void Exchange(float arr[],int i,int j)// 注意数组的类型
//{
//	int tmp = 0;
//	tmp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = tmp;// arr[j] = arr[i];交换都搞错了
//}
//void BubbleSort(float arr[], int n)
//{
//	int i = 0, j = 0;
//	for(i=0;i<n;i++)
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[i] < arr[j])// 排成降序
//				Exchange(arr, i, j);
//		}
//}
//int main()
//{
//	// 存入数据,在for语句中顺带计算总分
//	int n = 0;
//	float arr[100] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	float sum = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%f", &arr[i]);
//		sum += arr[i];
//
//	}
//	// 进行排序
//	BubbleSort(arr, n);
//	printf("%.2f %.2f %.2f", arr[0], arr[n - 1], sum / n);
//	return 0;
//}

//// 有序序列插入一个数
//int main()
//{
//    // 存储数据
//    int n = 0;
//    int arr[51] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    // 插入整数
//    int num = 0;
//    scanf("%d", &num);
//    //采用一种计数器的方式,标记应该插在哪里
//    int count = 0;
//    int k = 0;
//    while (k < n)
//    {
//        if (arr[k] < num)
//            count++;
//        else
//            break;
//        k++;
//    }
//    // 从标记处开始往后移一位
//    for (i = n - 1; i >= count; i--)// for (i = n - 1; i >= count; i--)这里不能是i++
//        arr[i + 1] = arr[i];
//    arr[count] = num;
//	  for(i=0;i<n+1;i++)
//		printf("%d ",arr[i]);
//    return 0;
//}

//// 矩阵计算
//int main()
//{
//    // 存储数据
//    int n = 0, m = 0;
//    //忘记存n\m了
//    scanf("%d%d", &n, &m);
//    int arr[100] = { 0 };
//    int i = 0;
//    int sum = 0;
//    for (i = 0; i < n * m; i++)// 存数组的同时可以判断正负并求和
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] > 0)// if(arr[i])并不是判断正负的
//            sum += arr[i];
//    }
//    printf("%d", sum);
//    return 0;
//}

//// 最高分与最低分之差---有更简单的方法
//void Exchange(int arr[], int i, int j)
//{
//	int tmp = 0;
//	tmp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = tmp;
//}
//void BubbleSort(int arr[], int  n)
//{
//	int i = 0, j = 0;
//	for (i = 0; i < n; i++)
//		for (j = i + 1; j < n; j++)
//			if (arr[i] > arr[j])// 升序
//				Exchange(arr, i, j);
//}
//int main()
//{
//	int n = 0;
//	int arr[10000] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	//冒泡排序
//	BubbleSort(arr, n);
//	printf("%d", arr[n - 1] - arr[0]);
//	return 0;
//}

//// 有序序列判断-----就是对冒泡排序的优化步骤
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ascending = 0;
//	int descending = 0;
//	// int count = 0; 靠单一计数器没法在两数相同的情形下确定
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	// 判断
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] <= arr[i + 1])
//			ascending++;
//		if (arr[i] >= arr[i + 1])
//			descending++;
//	}
//	if (ascending==n-1||descending==n-1)
//		printf("sorted");
//	else
//		printf("unsorted");
//	return 0;
//}

//// 有序序列插入一个整数
//int main()
//{
//	int n = 0;
//	int arr[51] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)// 如果输入格式改变可以做到存数据的同时进行比较计数
//		scanf("%d", &arr[i]);
//	// 标记该插入的位置
//	int count = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 0; i < n; i++)
//		if (arr[i] < num)
//			count++;
//	// 从arr[count]往后移一位
//	for (i = n-1; i >= count; i--)
//		arr[i + 1] = arr[i];
//	arr[count] = num;
//	for(i=0;i<n+1;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//// 序列中整数去重
//int main()//---出去喝几口水想出来了
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	// 选择性输出
//	printf("%d ", arr[0]);
//	for (i = 1; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)// 有时候循环变量也能作为flag使用
//		{
//			if (arr[i] == arr[j])
//				break;
//		}
//		if (i == j)
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}

//// 有序序列合并
//int main()
//{
//	// 输入数据
//	int n = 0, m = 0;
//	int arr3[200] = { 0 };
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr1[i]);
//	for (i = 0; i < m; i++)
//		scanf("%d", &arr2[i]);
//	// 双管齐下
//	int j = 0,k=0;
//	// 将长度相等的部分先比较并放入arr3中
//	for (i = 0, j = 0,k=0; i < n && j < m;k++)
//	{
//		if (arr1[i] < arr2[j])
//		{
//			arr3[k] = arr1[i];
//			i++;
//		}
//		else
//		{
//			arr3[k] = arr2[j];
//			j++;
//		}
//	}
//	// 将较长的数组的剩余部分放入arr3中
//		if (i < n)
//		{
//			for (i,k; i < n; k++,i++)
//				arr3[k] = arr1[i];
//		}
//		if (j < m)
//		{
//			for (j,k; j < m;k++, j++)
//				arr3[k] = arr2[j];
//		}
//	for (k = 0; k < m + n; k++)
//		printf("%d ", arr3[k]);
//	return 0;
//}
//int main()-----调试失败
//{
//	// 输入数据
//	int n = 0, m = 0;
//	int arr3[200] = { 0 };
//	int arr1[100] = { 0 };
//	int arr2[100] = { 0 };
//	scanf("%d%d", &n, &m);
//	int i = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr1[i]);
//	for (i = 0; i < m; i++)
//		scanf("%d", &arr2[i]);
//	int j = 0, k = 0;
//	for (k = 0; k < m + n; k++)
//	{
//		for (i = 0, j = 0; i < n && j < m;)
//		{
//			if (arr1[i] < arr2[j])
//			{
//				arr3[k] = arr1[i];
//				i++;
//			}
//			else
//			{
//				arr3[k] = arr2[j];
//				j++;
//			}
//		}
//		if (j == m || i == n)
//		{
//			if (m - n > 0)
//			{
//				arr3[k] = arr2[j];
//				j++;
//			}
//			else
//			{
//				arr3[k] = arr1[i];
//				i++;
//			}
//		}
//	}
//	for (k = 0; k < m + n; k++)
//		printf("%d ", arr3[k]);
//	return 0;
//}

//// 班级成绩输入输出
//int main()
//{
//    float arr[5] = { 0 };
//    int i = 0, j = 0;
//    for (j = 0; j < 5; j++)// 分人打印
//    {
//        float sum = 0;
//        for (i = 0; i < 5; i++)// 每一个人同时打印所有信息
//        {
//            scanf("%f", &arr[i]);
//            sum += arr[i];
//            printf("%.1f ", arr[i]);
//            if (i == 4)// 每行最后输出总成绩并换行
//            {
//                printf("%.1f", sum);
//                printf("\n");
//            }
//        }
//    }
//}
//// 如果输入的是一行，则运行正确，有了回车输入就不对（scanf函数没有深入理解）
//// 98.5 96.0 100 99 88 60.5 77 88.5 99 60 80 80.5 89 91 92 93 94 95.5 96 97.5 100 98 88.5 88 78.5
//// 98.5 96.0 100 99 88
//// 60.5 77 88.5 99 60
//// 80 80.5 89 91 92
//// 93 94 95.5 96 97.5
//// 100 98 88.5 88 78.5
//int main()-----光顾着创新，捣鼓了半天
//{
//    // 输入
//    float arr[5][5] = { 0 };
//    int i = 0, j = 0;
//    for (i = 0; i < 5; i++)
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f", &arr[i][j]);
//        }
//    // 输出
//    for (i = 0; i < 5; i++)
//    {
//        float sum = 0;
//        for (j = 0; j < 5; j++)
//        {
//            printf("%.1f ", arr[i][j]);
//            sum += arr[i][j];
//        }
//        printf("%.1f", sum);
//        printf("\n");
//    }
//    return 0;
//}

//// 最高身高
//int main()
//{
//    // 输入数据
//    int n = 0, m = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d%d", &n, &m);
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++)
//        for (j = 0; j < m; j++)
//            scanf("%d", &arr[i][j]);
//    // 找最大
//    int max = arr[0][0];
//    int x = 1, y = 1;// 防止遇到一行一列的矩阵
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr[i][j] > max)
//            {
//                max = arr[i][j];
//                x = j + 1; y = i + 1;// 如果前面初始化是0 0，则这里返回j,i到输出的时候再加1
//            }
//        }
//    }
//    printf("%d %d", y, x);
//    return 0;
//}

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
//        //scanf(" %c", &t);--这样也行
//        //getchar();// 需要处理换行符
//        //t = getchar();
//        int x1 = 0, x2 = 0;
//        //scanf("%d%d", &x1, &x2);
//        // 这里统一输入即可
//        scanf(" %c%d%d",&t, &x1, &x2);//------这里%c前面空格吸收了 \n
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

//// 杨辉三角
//int main()
//{
//    int n = 0;
//    int arr[30][30] = { 0 };
//    scanf("%d", &n);
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < n; j++)
//        {
//            if (i == j || j == 0)
//            {
//                arr[i][j] = 1;
//                printf("%5d", arr[i][j]);
//            }
//            else
//                if (i > 1&&i>j)
//                {
//                    arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//                    printf("%5d", arr[i][j]);// 这里没有存入两条边的时候是不会有数值来相加的
//
//                }
//        }
//        printf("\n");
//    }
//}