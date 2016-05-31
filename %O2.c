#include <stdio.h>
#include <math.h>

int main (void){
	double q9, o2;
	scanf("%lf", &o2);
	q9 = 100.8 * exp(pow(o2 + (-106), 2) / -3745);
	return q9;
}