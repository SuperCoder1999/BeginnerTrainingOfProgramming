//#include"Head.h"
// ���㷨���� BC-39 ����ǰ���� ������������õ���
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
//void BubbleSort(int arr[], int n)
//{
//    int i = 0, j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = i + 1; j < n; j++)
//        {
//            if (arr[i] < arr[j])
//                Exchange(arr, j, i);
//        }
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
//    BubbleSort(arr, n);
//    Print(arr);
//    return 0;
//}