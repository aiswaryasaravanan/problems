#include<stdio.h>
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int *arrptr = arr;
    for(int i = 0; i < 5; i++){
        printf("%d\n", *arrptr);
        arrptr++;
    }
    return 0;
}