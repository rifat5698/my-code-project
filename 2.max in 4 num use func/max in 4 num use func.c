#include<stdio.h>
int max_four(int a, int b, int c, int d){
    if(a > b && a > c && a > d){
        return a;
    }else if(b > c &&  b > d){
        return b;

    }else if(c > d){
          return c;
     }else{
        return d;
     }
}
int main(){
    int a, b, c, d, max;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    max = max_four(a, b, c, d);
    printf("%d\n",max);



return 0;
}
