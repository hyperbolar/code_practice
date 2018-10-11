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
