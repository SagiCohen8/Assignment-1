#include"myMath.h"

double Exp(int x)
{	
	return Pow(2.718,x);
}
double Pow(double x, int y)
{
	double ans = x;
	if(y==0) ans = 1;		
	else
	{
		int counter = 1;
		while(counter < y)
		{
		ans = ans * x;
		counter++;
		}
	}	
	return ans;
}
