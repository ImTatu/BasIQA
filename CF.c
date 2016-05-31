#include <stdio.h>
#include <math.h>

int main (void){
	double q1, CF;

scanf("%lf", &CF);
q1 = 98.03 + (-36.45 * log(CF)) + (3.138 * pow(log10(CF), 2)) + (0.06776 * pow(log10(CF), 3));
return q1;
}