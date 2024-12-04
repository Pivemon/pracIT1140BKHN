//Ai đọc được dòng này thì mẹ m béo vl
#include <stdio.h>
int main() {
    double toan, ly, hoa, sum, avg;
    scanf("%lf%lf%lf",&toan, &ly, &hoa);
    sum=toan+ly+hoa;
    avg=sum/3;
    printf("%.6lf",sum);
    printf("\n%.6lf",avg);
    return 0;
}
