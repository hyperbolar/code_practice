#include <stdio.h>

void Hanoi(char x, char y, char z, int n)
{
	if (n == 1)
		printf("%d: %c -> %c\n", n, x, y);
	else {
		Hanoi(x, z, y, n - 1);
		printf("%d: %c -> %c\n", n, x, y);
		Hanoi(z, y, x, n - 1);
	}
}

int main(void)
{
	int iSlice;

	scanf_s("%d", &iSlice);
	Hanoi('A', 'B', 'C', iSlice);

	return 0;
}
