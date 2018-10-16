// Euclidean algorithm
// max common factor
// recurring

#include <stdio.h>

int MaxSec(int x, int y)
{
	int z = (x < y) ? (y % x) : (x % y);
	if (z == 0)
	{
		return (x < y) ? x : y;
	}
	while (z)
	{
		int temp = (x < y) ? x : y;
		x = z;
		y = temp;
		return MaxSec(x, y);
	}
	
}

int main(void)
{
	int int_1, int_2;
	printf("int_1: "); scanf_s("%d", &int_1);
	printf("int_2: "); scanf_s("%d", &int_2);
	printf("Max common factor is: %d", MaxSec(int_1, int_2));

	return 0;
}

// loop

#include <stdio.h>

int main(void)
{
	int int_1, int_2;

	printf("int_1: "); scanf_s("%d", &int_1);
	printf("int_2: "); scanf_s("%d", &int_2);

	int int_3 = (int_1 < int_2) ? (int_2 % int_1) : (int_1 % int_2);

	while (int_3) {
		int temp = (int_1 < int_2) ? int_1 : int_2;
		int_1 = temp;
		int_2 = int_3;
		int_3 = (int_1 < int_2) ? (int_2 % int_1) : (int_1 % int_2);
	}
	printf("max common factor: %d", (int_1 < int_2) ? int_1 : int_2);

	return 0;
}
