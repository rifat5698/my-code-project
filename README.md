#include<stdio.h>
int main(){
    int n, *arr, i;
    scanf("%d", &n);
    arr = (int*) malloc(n * sizeof(int));
    for(i = 0; i < n; i++){
        scanf("%d", arr + i);
    }

 for(i = 0; i < n; i++){
        printf("%d ", *(arr + i));
    }


return 0;
}
