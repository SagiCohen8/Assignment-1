#include"myMath.h"
#include<stdio.h>
int main()
{			
	double x = 0;
	printf("Please insert a real number.\n");
	scanf("%lf", &x);
	float equa_1 =  sub(add(Exp((int)x),Pow(x,3)),2);
	float equa_2 = add(mul(x,3), mul(Pow(x,2), 2));
	float equa_3 = sub(div(mul(Pow(x,3),4),5),mul(x,2));
	printf("The value of f(x) = e^x + x^3 - 2 at the point: %0.4lf, is: %0.4f\n", x, equa_1);
	printf("The value of f(x) = 3x + 2x^2 at the point: %0.4lf, is: %0.4f\n", x, equa_2);
	printf("The value of f(x) = (4x^3)/5 - 2x at the point: %0.4lf, is: %0.4f\n", x, equa_3);
	return 0;
}
