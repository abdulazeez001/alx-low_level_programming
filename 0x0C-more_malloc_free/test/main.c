#include <stdio.h>

int main(void){
    int i = 98;
    int *ptr;

    ptr = &i;
    *ptr = 5;
    printf("%d,%d\n",*ptr,i);
    return (0);
}