#include <stdio.h>
int pal(char *str)
{
    // char alpha1, alpha2;
    printf("%s\n",str);
    // while (*str)
    // {
    //     alpha1 = *str;
    //     printf("%c",alpha1);
    //     str++;
    // } str--;
    // while (str)
    // {
    //     alpha2 = *str;
    //     str--;
    // }
    // printf("%c,%c",alpha1,alpha2);
    // if (alpha1 == alpha2)
    // {
    //     return (1);
    // }
    // return (0);
}

void main (void){
    char u[6];
    u[0] = 'l';
    u[1] = 'e';
    u[2] = 'v';
    u[3] = 'e';
    u[4] = 'l';
    // printf("%s\",u);
    pal(u);
}