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

//3-4 一元二次方程ax²+bx+c=0的实根
#include <stdio.h>
#include <math.h>

int main(void)
{
	double a, b, c;
	
	printf("a = ?\nb = ?\nc = ?\n");
	scanf_s("%lf %lf %lf", &a, &b, &c);
	
	double delta = b * b - 4 * a * c;
	double root_delta = pow(delta, 0.5);

	if (a)
	{
		if (delta > 0)
		{
			double result_1 = (-1 * b - root_delta) / (2 * a);
			double result_2 = (-1 * b + root_delta) / (2 * a);
			printf("Solution:\nx1 = %f\nx2 = %f", result_1, result_2);
		}
		else if (delta == 0)
		{
			double result = -1 * b / (2 * a);
			printf("Solution:\nx1 = x2 = %f", result);
		}
		else
		{
			printf("No solution!");
		}
	}
	if (a == 0)
		printf("It is not a quadratic equation with one unknown!");

	return 0;
}

//3-5 从键盘输入一个三角形的三条边，判断其为何种三角形
#include <stdio.h>
#include <math.h>

int IsRt(int a, int b, int c)
{
	if (a*a + b * b == c * c || a * a + c * c == b * b \
		|| b * b + c * c == a * a) 
		return 1;
	
	else return 0;
}

int main(void)
{
	int a, b, c;
	printf("Input the value of a, b and c\n");
	scanf_s("%d %d %d", &a, &b, &c);

	if (a + b > c || a + c > b || b + c > a) {
		if (a == b && a == c) {
			printf("It is regular triangle.\n");
		}
		else if (a == b || b == c || a == c) {
			if (IsRt(a, b, c))
				printf("It is isosceles right triangle.\n");
			else
				printf("It is isosceles triangle.\n");
		}
		else if (IsRt(a, b, c)) {
			printf("It is Non isosceles right triangle.\n");
		}
		else {
			printf("It is a normal triangle(sad face).\n");
		}
	}
	else {
		printf("Cannot make a triangle with these 3 value.\n");
	}

	return 0;
}

//3-6 *见小测验20181010

//3-7 从键盘输入一个星期中的某一天，0：星期天 1~6：星期一~星期六），输出对应的英文单词

#include <stdio.h>

int main(void)
{
	int day;
	
	printf("Input a number in range (0, 6)\n");
	scanf_s("%d", &day);
	
	switch (day)
	{
	case 0: printf("Sunday."); break;
	case 1: printf("Monday."); break;
	case 2: printf("Tuesday."); break;
	case 3: printf("Wednesday."); break;
	case 4: printf("Thursday."); break;
	case 5: printf("Friday."); break;
	case 6: printf("Saturday."); break;
	default: printf("Invalid Input."); break;
	}

	return 0;
}

//3-8 和前面一样（前面该用if/else if/else分支解法

//3-9 计算某年某月的天数

#include <stdio.h>

int Isleap(int year)
{
	if (year % 4 != 0)
		return 0;
	else
	{
		if (year % 400 == 0)
			return 1;
		else if (year % 100 == 0)
			return 0;
		else
			return 1;
	}
}

int main(void)
{
	int yy, mm;
	
	printf("Year: "); scanf_s("%d", &yy);
	printf("Month: "); scanf_s("%d", &mm);

	switch (mm) {
	case 1: case 3: case 5: case 7: case 8: case 10: case 12:
		printf("%d/%02d have 31 days.", yy, mm); break;
	case 4: case 6: case 9: case 11:
		printf("%d/%02d have 30 days.", yy, mm); break;
	case 2: {
		if (Isleap(yy))
			printf("%d/02 have 29 days.", yy);
		else
			printf("%d/02 have 28 days.", yy);
		break;
	}
	default: printf("Invalid Input."); break;
	}

	return 0;
}

//3-10 用while语句求n!（n的阶乘）

#include <stdio.h>

int main(void)
{
	int num = 0;
	int result = 1;

	printf("n = "); scanf_s("%d", &num);
	while (num > 0)
	{
		result *= num;
		num--;
	}
	printf("n! = %d", result);

	return 0;
}

//3-11 用do-while语句求n!
#include <stdio.h>

int main(void)
{
	int num = 0;
	int result = 1;

	printf("n = "); scanf_s("%d", &num);
	do
	{
		if (num)
			result *= num;
		num--;
	} while (num > 0);
	
	printf("n! = %d", result);

	return 0;
}

//3-12 用for循环语句求n!
#include <stdio.h>

int main(void)
{
	int num = 0;
	int result = 1;

	printf("n = "); scanf_s("%d", &num);
	
	for (int i = 1; i <= num; i++) 
		result *= i;
	
	printf("n! = %d", result);

	return 0;
}

//3-13 计算从键盘输入的一系列正数的和，要求先输入整数的个数
#include <stdio.h>

int main(void)
{
	int iAmount;
	int iSum = 0;
	
	printf("How many numbers: ");
	scanf_s("%d", &iAmount);
	
	for (int i = 0; i < iAmount; i++) {
		int temp;
		scanf_s("%d", &temp);
		iSum += temp;
	}

	printf("Sum of these %d numbers equals to %d", iAmount, iSum);

	return 0;
}

//3-14 计算从键盘输入的一系列正数的和，要求输入以0结束
#include <stdio.h>

int main(void)
{
	int iSum = 0;
	int iAmount = 0;
	int iNum;

	printf("Input one number: ");
	scanf_s("%d", &iNum);

	while (iNum) {
		iSum += iNum;
		iAmount++;
		printf("Input one number: ");
		scanf_s("%d", &iNum);
	}
	
    printf("Sum of these %d numbers equals to %d", iAmount, iSum);

	return 0;
}

//3-15 从键盘接受字符，一直到输入字符为Y(y)或N(n)为止
#include <stdio.h>

int Endl(char c)
{
	if (c == 'n' || c == 'N' || c == 'y' || c == 'Y') {
		return 1;
	}
	else return 0;
}

int main(void)
{
	puts("Input a char");
	char cGet = getchar();
	
	while (!Endl(cGet)) {
		cGet = getchar();
	}

	return 0;
}

//3-16 判断键盘输入的一个整数是否为素数
#include <stdio.h>
#include <math.h>

int IsPrime(int c)
{
	int i = 2;
	if (c == 2 || c == 3)
		return 1;
	else if (c < 2)
		return 0;
	while (i <= pow(c, 0.5) + 1) {
		if (c % i == 0) return 0;
		i++;
	}
	if (i > pow(c, 0.5))
		return 1;
}

int main(void)
{
	int num;
	puts("Input a number");
	scanf_s("%d", &num);
	
	if (IsPrime(num))
		printf("It is prime number.\n");
	else
		printf("It isn't.\n");

	return 0;
}

//3-17 求第n个斐波那契数（第一个和第二个是1）

