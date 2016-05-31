#include <stdio.h>
#include <math.h>

int TU (void){
	
	double q7, TU;

	scanf("%lf", &TU);

	q7 = 97.34 * exp(-0.01139 * TU) + (-0.04917 * sqrt(TU));

	return q7;

}