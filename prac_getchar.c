// Special practice about function getchar()
// 20181011 A

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
