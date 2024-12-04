#include <stdio.h>
#include <math.h>
int main() {
    double x,y,a,b,c;
    scanf("%lf%lf",&x,&y);
    a=pow(x,2)+pow(y,2);
    b=pow((x+y),2);
    c=pow((x-y),2);
    printf("%.6lf",a);
    printf("\n%.6lf",b);
    printf("\n%.6lf",c);
    return 0;
}
