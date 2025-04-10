#include<stdio.h>
int main(){
    int x, y, int_sum = 0, int_difference;
    float a, b, float_sum = 0, float_difference;

    scanf("%d%d", & x , & y);
    scanf("%f%f", & a, & b);


    int_sum = int_sum + x + y;
    int_difference = x - y;

    float_sum = float_sum + a + b;
    float_difference = a - b;

    printf("%d %d\n", int_sum, int_difference);
    printf("%.1f %.1f\n", float_sum, float_difference);



return 0;
}
