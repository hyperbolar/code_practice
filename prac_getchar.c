// Special practice about function getchar()
// 20181011 A
/*设计程序，统计输入行（以“#”结尾）中单词的个数*/

#include <stdio.h>

int main(void)
{
	printf("Give a sentense. End up with character '#'.\n");
	char ch = getchar();
	int iAlpha = 0;
	int iCount = 0;

	while (ch != '#')
	{
		if (ch == ' ' || ch == '\n' || ch == '\t') {
			if (iAlpha)
				iCount++;
			int iAlpha = 0;
		}
		else {
			iAlpha = 1;
		}
		ch = getchar();
	}
	if (iAlpha)
		iCount++;
	printf("Word: %d", iCount);

	return 0;
}

// 20181011 B
/*      
        统计交通流量
        路边设置一车辆探测器，探测器用线路连接到计算机，
	当有车辆通过时，探测器传送信号1给计算机，
	探测器中有一计时器，每秒钟发出一个数字信号2传给计算机，
	该计算机从开始探测时计时，探测结束时传递一个数字信号0给计算机。
*/


int main(void)
{
	printf("Rule:\n\
input 1: A car passed.\n\
input 2: A second passed.\n\
input 0: Program ended.\n");

	int intSign;
	int intTime = 0;
	int intCar = 0;
	int inter = 0;
	int intMax;

	scanf_s("%d", &intSign);
	while (intSign) 
	{
		int Temp = inter;
		if (intSign == 1)
		{
			intCar++;
			inter = 0;
		}
		else if (intSign == 2)
		{
			intTime++;
			inter++;
		}
		else
			printf("Invalid input, try again.");
		if (Temp < inter)
			Temp = inter;
		intMax = Temp;
        scanf_s("%d", &intSign);
	}
	printf("Time: %d, Car: %d\n", intTime, intCar);
	printf("Max inter: %d", intMax);

	return 0;
}
