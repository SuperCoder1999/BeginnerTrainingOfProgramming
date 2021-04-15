#include"Head.h"

//// 变换思想很重要，不论怎么变化都需要将原数字更改一次
//int main()
//{
//	int value = 0;
//	scanf("%d", &value);
//	printf("year=%d\n", value / 10000);// 除10000得到前四位数字，但是并没有改变value
//	value %= 10000;// 彻底抛弃前四位数字，在后四位数字中操作
//	printf("month=%02d\n", value / 100);// 只得到前两位数字
//	printf("date=%02d\n", value % 100);// 得到后两位数字
//	return 0;
//}
//int main()
//{
//	int value = 0;
//	int year = 0, month = 0, date = 0;
//	scanf("%d", &value);
//	date = value % 100;
//	value /= 100;
//	month = value % 100;
//	year = value / 100;
//	printf("year=%d\nmonth=%02d\ndate=%02d", year, month, date);
//	return 0;
//}