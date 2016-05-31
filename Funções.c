#include <stdio.h>
#include <math.h>

int O2 (void){
	double q9, o2;
	scanf("%lf", &o2);
	q9 = 100.8 * exp(pow(o2 + (-106), 2) / -3745);
}
int CF (void){
	double q1, CF;

scanf("%lf", &CF);
q1 = 98.03 + (-36.45 * log(CF)) + (3.138 * pow(log10(CF), 2)) + (0.06776 * pow(log10(CF), 3));
}
int pH (void){
	double q2, ph;
	scanf("%lf", &ph);
	q2 = 0.05421 * pow(ph, (1.23 * ph) + (-0.09873 * pow(ph, 2))) + 5.213;
}
int DBO (void){
	double q3, DBO;
	scanf("%lf", &DBO);
	q3 = 102.6 * exp(-0.01101*DBO);

}
int FT (int CF){
	double q5;
	q5 = 213.7 * exp(-1.680 * pow(CF, 0.3325));
}