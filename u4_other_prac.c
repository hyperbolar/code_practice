#include <stdio.h>

//u4_10_recurison
int Hermite(int n, int x)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2 * x;
	else 
		return 2 * x * Hermite(n - 1, x) - 2 * (n - 1) * Hermite(n - 2, x);
}

int main(void)
{
	int n, x;
	printf("n = ?\nx = ?\n"); scanf_s("%d %d", &n, &x);
	printf("Hermite(%d, %d) = %d", n, x, Hermite(n, x));

	return 0;
}

//u4_10_iteration
int Hermite(int n, int x)
{
	int result = 0;
	int i = 3;
	if (n == 1)
		result = 1;
	else if (n == 2)
		result = 2 * x;
	else {
		while (i <= n)
		{
			int temp_1 = 1;
			int temp_2 = 2 * x;
			result = 2 * x * temp_2 - 2 * (n-1) * temp_1;
			temp_1 = temp_2;
			temp_2 = result;
			i++;
		}
	}
	return result;
}

int main(void)
{
	int n, x;
	printf("n = ?\nx = ?\n"); scanf_s("%d %d", &n, &x);
	printf("Hermite(%d, %d) = %d", n, x, Hermite(n, x));

	return 0;
}

//u4_12
int path(int n)
{
	if (n <= 2)
		return 1;
	else {
		if (n % 2)
			return path(n - 1) + path(n - 2);
		else
			return path(n - 1) + path(n - 2) + path(n - 3);
	}
}

int main(void)
{
	int n;
	printf("n = "); scanf_s("%d", &n);

	printf("Totally have %d methods", path(n));

	return 0;
}

//u4_13
int cow(int n)
{
	if (n < 4)
		return 1;
	else
		return cow(n - 1) + cow(n - 3);
}

int main(void)
{
	int n;
	printf("How many years: "); scanf_s("%d", &n);

	printf("Cows: %d", cow(n));

	return 0;
}

//u4_11
int Ack(int m, int n)
{
	if (m == 0 || n == 0)
		return (m == 0) ? n + 1 : Ack(m - 1, 1);
	else
		return Ack(m - 1, Ack(m, n - 1));
}

int main(void)
{
	printf("Ack(2, 2) = %d", Ack(2, 2));

	return 0;
}
