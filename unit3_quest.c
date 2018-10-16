//P80 3.8.8
//用公式pi / 4 = 1 - 1/3 + 1/5 -1/7 + ...计算pi的近似值

#include <stdio.h>

int main(void)
{
	int i = 1; 
	int iKesuu = 1;
	
	double fQuater_pi = 0.0; 
	do {
		fQuater_pi += 1.0 / i  * iKesuu;
		i += 2;
		iKesuu *= -1;
	} while (1.0 / i > 0.0000001);
	double pi = 4 * fQuater_pi;
	printf("Pi = %.9f", pi);

	return 0;
}

//example 1 ~ 3

// 例题合集~
#include <stdio.h>
#include <math.h>

//3-1 编写一个程序，输入一个整数，输出该数的平方、立方以及平方根
int main(void)
{
	double x;
	printf("x = "); scanf_s("%lf", &x);
	printf("square(x) = %.3f\ncube(x) = %.3f\nsquare_root(x) = %.3f\n",\
		x*x, x*x*x, pow(x, 0.5));

	return 0;
}

//3-2 编写一个程序，计算级数a+2a+3a+...的前n项的和

int main(void)
{
	double a;
	int n;
	
	printf("a = "); scanf_s("%lf", &a);
	printf("n = "); scanf_s("%d", &n);

	double sum = n * (n + 1) * a * 0.5; 
	printf("sum = a + 2a + 3a + ... + na = %.3f", sum);

	return 0;
}

//3-3 从键盘输入三个整数，计算其中最大者并输出之

int main(void)
{
	int a, b, c;
	
	printf("Input\na b c \n");
	scanf_s("%d %d %d", &a, &b, &c);

	int max = (a > b) ? a : b;
	max = (max > c) ? max : c;

	printf("The max of 3 number is %d\n", max);

	return 0;
}
