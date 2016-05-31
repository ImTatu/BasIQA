#include <stdio.h>
#include <math.h>

int ST (void){
	
	double q8, ST;

	scanf("%lf", &ST);

	q8 = 80.26 * exp(-0.00107 * ST) + (0.03009 * sqrt(ST) + (-0.1185 * ST));

	return q8;

}