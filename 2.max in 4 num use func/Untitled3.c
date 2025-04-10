#include<stdio.h>
int max_four(int a, int b, int c, int d){
    if(a > b && a > c && a > d){
        printf("%d",a);
    }else if(b > c &&  b > d){
        printf("%d",b);

    }else if(c > d){
          printf("%d",c);
     }else{
        printf("%d",d);
     }
}
int main(){
    int a, b, c, d;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
    scanf("%d", &d);

    max_four(a, b, c, d);


return 0;
}
