#include <stdio.h>

int main(void){
    char *s = "shittu";
    while (*s){
        printf("%c",*s);
        putchar('\n');
        s++;
    }
    s--;
    while (*s){
        printf("%c",*s);
        putchar('\n');
        s--;
    }
}