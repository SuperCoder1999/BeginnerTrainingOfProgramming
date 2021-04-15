// 结构体不熟练

#include"Head.h"
//
//typedef struct QqList
//{
//	int arr[10];
//	int sz;
//} QqList;
//
//int Partition(QqList* L, int low, int high)
//{
//	L->arr[0] = L->arr + low;
//	while (low < high)
//	{
//		while (*(L->arr + high) > L->arr[0] && low < high) --high;
//		*(L->arr + low) = *(L->arr + high);
//		while (*(L->arr + low) < L->arr[0]&&low<high) ++low;
//		*(L->arr + high) = *(L->arr + low);
//	}
//	*(L->arr + low) = L->arr[0];
//	return low;
//}
//void QSort(QqList* L, int low, int high)
//{
//	if (high > low)
//	{
//		int pivotioc = Partition(L, low, high);
//		QSort(L, low, pivotioc - 1);
//		QSort(L, pivotioc + 1, high);
//	}
//}
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	QqList List = { { 0,1,2,3,4,5,6,7,8,9 } ,10};
//	QqList* L = &List;
//	QSort(L,1, L->sz);
//	for (int i = 1; i <= 9; i++)
//		printf("%d ", *(L->arr+i));
//
//}

//// 快读排序简单版本
//int Partition(int arr[10], int low, int high)
//{
//	arr[0] = arr[low];
//	while (low < high)
//	{
//		while (arr[high] < arr[0] && low < high) --high;
//		arr[low] = arr[high];
//		while (arr[low] > arr[0] && low < high) ++low;
//		arr[high] = arr[low];
//	}
//	arr[low] = arr[0];
//	return low;
//}
//void QsList(int arr[10], int low, int high)
//{
//	if (low < high)
//	{
//		int a = Partition(arr, low, high);
//		QsList(arr, low, a - 1);
//		QsList(arr, a + 1, high);
//	}
//}
//
//int main()
//{
//	int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
//	int length = 9;
//	QsList(arr, 1, length);
//	for (int i = 1; i <= 9; i++)
//		printf("%d", arr[i]);
//
//}

//// 输出前五名
//#include<stdio.h>
//void print(int arr[], int n)
//{
//    int i = 0;
//    for (i = 0; i < 5; i++)
//        printf("%d ", arr[i]);
//}
//int Midloc(int arr[], int low, int high)
//{
//    int tmp = arr[low];
//    while (low < high)
//    {
//        while (arr[high] < tmp && low < high) high--;
//        arr[low] = arr[high];
//        while (arr[low] > tmp && low < high) low++;
//        arr[high] = arr[low];
//    }
//    arr[low] = tmp;
//    return low;
//}
//void QqList(int arr[], int low, int high)
//{
//    if (low < high) // 这里是if
//    {
//        int mid = Midloc(arr, low, high);
//        QqList(arr, low, mid - 1);
//        QqList(arr, mid + 1, high);
//    }
//}
//int main()
//{
//    int arr[40] = { 0 };
//    int n = 0;
//    int i = 0;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//        scanf("%d", &arr[i]);
//    QqList(arr, 0, n - 1);
//    print(arr, n);
//    return 0;
//}

