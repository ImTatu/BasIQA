#include <stdio.h>
#include <math.h>

int main (void){
	double q2, ph;
	scanf("%lf", &ph);
	q2 = 0.05421 * pow(ph, (1.23 * ph) + (-0.09873 * pow(ph, 2))) + 5.213;
	return q2;
}