#include <stdio.h>
#include <math.h>


int main(){
	double a;
	double b;
	double c;
	
	scanf("%lf %lf %lf",&a,&b,&c);
	
	double p=(a+b+c)/2;
	printf("%.1f",sqrt(p*(p-a)*(p-b)*(p-c)));
	
	return 0;
}
