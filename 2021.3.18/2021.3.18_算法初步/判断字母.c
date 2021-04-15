#include"Head.h"
//int main()
//{
//    char ch = '0';
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch <= 'z' && ch >= 'a' || ch <= 'Z' && ch >= 'A')
//            printf("YES\n");
//        else
//            printf("NO\n");
//        getchar();
//    }
//    return 0;
//}


//可以用库函数--isalpha（是的话返回1，不是返回0）
//#include <stdio.h>
//int main()
//{
//    char ch = 0;
//    while (~scanf("%c", &ch))
//    {
//        getchar();// 处理在前也可以，因为它取走了，但是不影响ch
//        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
//            printf("YES\n");
//        else
//            printf("NO\n");
//    }
//    return 0;
//}