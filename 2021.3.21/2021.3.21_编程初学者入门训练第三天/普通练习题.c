#include"Head.h"

////  BC-78 ɸѡ��������
//// �������������ɸѡ����ѧϰ����������Գ�����һ��
//int main()
//{
//	int n = 0;
//	while (~scanf("%d", &n))// ������� ; ����û�����г���
//	{
//		// �������鲢�洢
//		int arr[100] = { 0 };
//		int i = 0, j = 0, count = 0;
//		for (i = 0; i < n - 1; i++)
//			arr[i] = i + 2;
//		// �������
//		for (i = 0; i < n - 1; i++)
//		{
//			for (j = 2; j < n; j++)
//			{
//				if (arr[i] == j)
//					continue;
//				else
//					if (arr[i] % j == 0)
//					{
//						arr[i] = 0;
//						count++;
//						break; // ���⣬����һ���ܳ����ľͿ����ų���
//					}
//			}
//		}
//		for (i = 0; i < n - 1; i++)
//			if (arr[i])
//				printf("%d ", arr[i]);
//		printf("\n%d\n", count);
//
//	}
//	return 0;
//}

//// BC-79 ͼ�����ƶ�
//int main()
//{
//	int m = 0, n = 0;
//	scanf("%d%d", &m, &n);
//	// �����������ڴ洢��һ��ͼ��
//	int arr1[10000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n * m; i++)
//		scanf("%d", &arr1[i]);
//	//// �����������ڴ洢�ڶ���ͼ��
//	//int arr2[10000] = { 0 };
//	//int i = 0;
//	//for (i = 0; i < n * m; i++)
//	//	scanf("%d", &arr2[i]);
//	
//	// ��ʵ�����ڲ��ö���ڶ������������Ƚϣ�����һ����
//	//���Ϳ��ԣ������������ʱ��Ҳ����Ҫѭ�������
//	int a = 0;
//	float count = 0;
//	for (i = 0; i < n * m; i++)
//	{
//		scanf("%d", &a);
//		if (a == arr1[i])
//			count++;
//	}
//	printf("%.2f", count / (n * m)*100);// ����Ҫ�����ţ��ٷ�����Ҫ����100
//	return 0;
//}

//// BC-80 ��½��֤ �����ַ���
//int main()
//{
//	char name[100] = { 0 };
//	char password[100] = { 0 };
//	while(~scanf("%s%s", name, password))
//	{
//	if (!strcmp(name, "admin") && !strcmp(password, "admin"))// ��ȷ���0
//		printf("Login Success!\n");
//	else
//		printf("Login Fail!\n");
//	}
//	return 0;
//}

// BC-85 ��������9���� ����ת��
/*  *****************************    */
// while(i/=10) {  i % 10 ;  } �ǻ���˼�룬����ҲҪ����ͨ
//// ��������9����
//int main()
//{
//    int i = 0;
//    int count = 0;
//    for (i = 1; i <= 2019; i++)
//    {
//        int num = i;// �½�һ�������� i
//        do// �ȱȽ��ٽ�������
//        {
//            if (num % 10 == 9)
//            {
//                count++;
//                break;
//            }
//        } while (num /= 10);// while (i /= 10);----������ѭ���ڲ��ı�ѭ������
//    }
//    printf("%d", count);
//    return 0;
//}
// ���Ͷ��ȡ�ɴ����������---���������������˼ά���Ĺ�


//// BC-87 ͳ�Ƴɼ�
//void Exchange(float arr[],int i,int j)// ע�����������
//{
//	int tmp = 0;
//	tmp = arr[i];
//	arr[i] = arr[j];
//	arr[j] = tmp;// arr[j] = arr[i];�����������
//}
//void BubbleSort(float arr[], int n)
//{
//	int i = 0, j = 0;
//	for(i=0;i<n;i++)
//		for (j = i + 1; j < n; j++)
//		{
//			if (arr[i] < arr[j])// �ųɽ���
//				Exchange(arr, i, j);
//		}
//}
//int main()
//{
//	// ��������,��for�����˳�������ܷ�
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
//	// ��������
//	BubbleSort(arr, n);
//	printf("%.2f %.2f %.2f", arr[0], arr[n - 1], sum / n);
//	return 0;
//}

//// BC-88 �������в���һ����
//int main()
//{
//    // �洢����
//    int n = 0;
//    int arr[51] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    // ��������
//    int num = 0;
//    scanf("%d", &num);
//    //����һ�ּ������ķ�ʽ,���Ӧ�ò�������
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
//    // �ӱ�Ǵ���ʼ������һλ
//    for (i = n - 1; i >= count; i--)// for (i = n - 1; i >= count; i--)���ﲻ����i++
//        arr[i + 1] = arr[i];
//    arr[count] = num;
//	  for(i=0;i<n+1;i++)
//		printf("%d ",arr[i]);
//    return 0;
//}

//// BC-90 �������
//int main()
//{
//    // �洢����
//    int n = 0, m = 0;
//    //���Ǵ�n\m��
//    scanf("%d%d", &n, &m);
//    int arr[100] = { 0 };
//    int i = 0;
//    int sum = 0;
//    for (i = 0; i < n * m; i++)// �������ͬʱ�����ж����������
//    {
//        scanf("%d", &arr[i]);
//        if (arr[i] > 0)// if(arr[i])�������ж�������
//            sum += arr[i];
//    }
//    printf("%d", sum);
//    return 0;
//}

// BC-91 �ɼ������������

//// BC-95 ��߷�����ͷ�֮��---�и��򵥵ķ���
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
//			if (arr[i] > arr[j])// ����
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
//	//ð������
//	BubbleSort(arr, n);
//	printf("%d", arr[n - 1] - arr[0]);
//	return 0;
//}

//// BC-96 ���������ж�-----���������� ð��������Ż�����
//int main()
//{
//	int n = 0;
//	int i = 0;
//	int ascending = 0;
//	int descending = 0;
//	// int count = 0; ����һ������û����������ͬ��������ȷ��
//	int arr[50] = { 0 };
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	// �ж�
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

//// BC-97 �������в���һ������
//int main()
//{
//	int n = 0;
//	int arr[51] = { 0 };
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)// ��������ʽ�ı�������������ݵ�ͬʱ���бȽϼ���
//		scanf("%d", &arr[i]);
//	// ��Ǹò����λ��
//	int count = 0;
//	int num = 0;
//	scanf("%d", &num);
//	for (i = 0; i < n; i++)
//		if (arr[i] < num)
//			count++;
//	// ��arr[count]������һλ
//	for (i = n-1; i >= count; i--)
//		arr[i + 1] = arr[i];
//	arr[count] = num;
//	for(i=0;i<n+1;i++)
//		printf("%d ", arr[i]);
//	return 0;
//}

//// BC-98 ������ɾ��ָ������
//// ��������ڴ���ɾ�����ø㣬����Ӧ���ʺ�
//// �������ֻ������Ļ��ɾ��
//// ֻҪѡ��������Ϳ�����---�����һ��˼ά�ɣ�
//int main()
//{
//    int n = 0;
//    int arr[50] = { 0 };
//    scanf("%d", &n);
//    int i = 0;
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//
//    int num = 0;
//    scanf("%d", &num);
//    // ѡ�������
//    //for(i=0;i<n-1&&arr[i]!=num;i++)for����в���ֱ�Ӹ�
//    for (i = 0; i < n; i++)
//        if (!(arr[i] == num))
//            printf("%d ", arr[i]);
//    return 0;
//}

//// BC-99 ����������ȥ��   �õ���ѡ��������˼ά��������������ɾ����㷨������Ҫ���յ�
//int main()//---��ȥ�ȼ���ˮ�������
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[1000] = { 0 };
//	int i = 0;
//	for (i = 0; i < n; i++)
//		scanf("%d", &arr[i]);
//	// ѡ�������----����һ��һ����˼ά��
//	printf("%d ", arr[0]);
//	for (i = 1; i < n; i++)
//	{
//		int j = 0;
//		for (j = 0; j < i; j++)// ��ʱ��ѭ������Ҳ����Ϊflagʹ��
//		{
//			if (arr[i] == arr[j])
//				break;
//		}
//		if (i == j)
//			printf("%d ", arr[i]);
//	}
//	return 0;
//}

//// BC-100 �������кϲ�
//int main()
//{
//	// ��������
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
//	// ˫������
//	int j = 0,k=0;
//	// ��������ȵĲ����ȱȽϲ�����arr3��
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
//	// ���ϳ��������ʣ�ಿ�ַ���arr3��
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
//int main()-----����ʧ��
//{
//	// ��������
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

//// BC-101 �༶�ɼ��������
//int main()
//{
//    float arr[5] = { 0 };
//    int i = 0, j = 0;
//    for (j = 0; j < 5; j++)// ���˴�ӡ
//    {
//        float sum = 0;
//        for (i = 0; i < 5; i++)// ÿһ����ͬʱ��ӡ������Ϣ
//        {
//            scanf("%f", &arr[i]);
//            sum += arr[i];
//            printf("%.1f ", arr[i]);
//            if (i == 4)// ÿ���������ܳɼ�������
//            {
//                printf("%.1f", sum);
//                printf("\n");
//            }
//        }
//    }
//}
//// ����������һ�У���������ȷ�����˻س�����Ͳ��ԣ�scanf����û��������⣩
//// 98.5 96.0 100 99 88 60.5 77 88.5 99 60 80 80.5 89 91 92 93 94 95.5 96 97.5 100 98 88.5 88 78.5
//// 98.5 96.0 100 99 88
//// 60.5 77 88.5 99 60
//// 80 80.5 89 91 92
//// 93 94 95.5 96 97.5
//// 100 98 88.5 88 78.5
//int main()-----����Ŵ��£������˰���
//{
//    // ����
//    float arr[5][5] = { 0 };
//    int i = 0, j = 0;
//    for (i = 0; i < 5; i++)
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%f", &arr[i][j]);
//        }
//    // ���
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

//// BC-104 ������
//int main()
//{
//    // ��������
//    int n = 0, m = 0;
//    int arr[10][10] = { 0 };
//    scanf("%d%d", &n, &m);
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++)
//        for (j = 0; j < m; j++)
//            scanf("%d", &arr[i][j]);
//    // �����
//    int max = arr[0][0];
//    int x = 1, y = 1;// ��ֹ����һ��һ�еľ���
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (arr[i][j] > max)
//            {
//                max = arr[i][j];
//                x = j + 1; y = i + 1;// ���ǰ���ʼ����0 0���ҷ���j,i����ô�����ʱ����Ҫ�ټ�1
//            }
//        }
//    }
//    printf("%d %d", y, x);
//    return 0;
//}

//// BC-106 �����Ǿ����ж�
//int main()
//{
//    // ��������
//    int n = 0;// ���Ǹ�ֵ��
//    scanf("%d", &n);
//    int arr[10][10] = { 0 };
//    int i = 0, j = 0;
//    //int flag=0;
//    for (i = 0; i < n; i++)// --for(i=0;i<n;j++)Ϊʲôд����j
//    {
//        for (j = 0; j < n; j++)
//        {
//            scanf("%d", &arr[i][j]);
//            if ((i > j) && (arr[i][j] != 0))
//                //if(i>=j&&arr[i][j]!=0)б�Խ��߲�����
//                     //flag=1;
//                break; // break���Ż��㷨�ģ�
//        // ��һ��flag����ֹͣ�ⲿѭ��Ҳ�У�j!=nҲ����
//        }
//        if (j < n)
//            break;
//    }
//    // ���뵽��ӡͼ���еĶԽ��߹���
//    if (i < n)
//        printf("NO\n");
//    else
//        printf("YES\n");
//    return 0;
//}
/*˫return�㷨
#include <stdio.h>
int main()
{
    int num = 0,temp = 0;
    scanf("%d",&num);
    for(int i = 0;i < num;i++){
        for(int j = 0;j < num;j++){
            scanf("%d",&temp);
            if(j < i && ((i*num)+j) > ((i-1)*num + 3) && temp != 0){
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}
*/

//// BC-107 ����ת��
//int main()
//{
//    // ��������
//    int n = 0, m = 0;
//    scanf("%d%d", &n, &m);
//    int arr[10][10] = { 0 };
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++)// ��������ʱ����ͬʱ����ﲻ��Ч��
//        for (j = 0; j < m; j++)
//            scanf("%d", &arr[i][j]);
//    // ��ӡ
//    for (j = 0; j < m; j++)// ���ｻ������
//    {
//        for (i = 0; i < n; i++) //��ά�����޷����������ʽ����Ҫ�ֶ�����
//            printf("%d ", arr[i][j]);
//        //printf("%d ",arr[j][i]); ���ｻ����ʽû��
//        printf("\n");
//    }
//    return 0;
//}

//// BC-108 ���󽻻�
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
//        //scanf(" %c", &t);--����Ҳ��
//        //getchar();// ��Ҫ�����з�
//        //t = getchar();
//        int x1 = 0, x2 = 0;
//        //scanf("%d%d", &x1, &x2);
//        // ����ͳһ���뼴��
//        scanf(" %c%d%d",&t, &x1, &x2);//------����%cǰ��ո������� \n
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

//// BC-109 �������
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
//                    printf("%5d", arr[i][j]);// ����û�д��������ߵ�ʱ���ǲ�������ֵ����ӵ�
//
//                }
//        }
//        printf("\n");
//    }
//}