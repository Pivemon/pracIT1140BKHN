#include <stdio.h>
#include <math.h>
int main() {
    double r,pi=3.14159,m,s;
    scanf("%lf",&r);
    m=r*2*pi;
    s=pow(r,2)*pi;
    printf("%.6lf",m);
    printf("\n%.6lf",s);
    return 0;
}
