#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    int length, i;
    gets(str);
    length = strlen(str);

    for(i = length; i >= 0; i--){
            printf("%c", str[i]);

    }



return 0;
}

