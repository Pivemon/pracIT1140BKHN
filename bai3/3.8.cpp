#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main() {
    double x,y,z,f;
    scanf("%lf%lf%lf",&x,&y,&z);
    f=(x+y+z)/(pow(x,2)+pow(y,2)+1)-fabs(x-z*cos(y));
    printf("%.6lf",f);
    return 0;
}
