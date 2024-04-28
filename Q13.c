//program to compute compound interest
#include <stdio.h>
#include <math.h>

int main() {
     double P=1000;
     double R=5;
     double T=2;
     double A=P*((pow((1+R/100),T)));
     double CI=A-P;
     printf("Compound Interest is %lf", CI);
     return 0;
     
}
