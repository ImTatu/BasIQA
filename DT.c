#include <stdio.h>
#include <math.h>

int DT (void){
	
	double q6, DT;

	scanf("%lf", &DT);

	q6 = 1 / (0.0003869 * pow(DT + 0.1815,2) + 0.01081);

	return q6;

}