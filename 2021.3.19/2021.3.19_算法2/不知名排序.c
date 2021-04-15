//#include"Head.h"
//#include<stdio.h>
//void Print(int arr[])
//{
//    int i = 0;
//    for (i = 0; i < 5; i++)
//        printf("%d ", arr[i]);
//}
//void Exchange(int arr[], int j, int i)
//{
//    int tmp = 0;
//    tmp = arr[j];
//    arr[j] = arr[i];
//    arr[i] = tmp;
//}
//void MyList(int arr[], int n)
//{
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        int max = i;
//        for (j = i + 1; j < n; j++)
//            if (arr[j] > arr[max])
//            {
//                max = j;
//            }
//        Exchange(arr, max, i);
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
//    MyList(arr, n);
//    Print(arr);
//    return 0;
//}