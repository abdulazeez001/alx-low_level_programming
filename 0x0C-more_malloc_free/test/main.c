#include <string.h>
#include <stdlib.h>
#include <stdio.h>
int main(void)
{
    char *s;

    s = malloc(12);
    strcpy(s, "Best School");
    printf("%s\n",s);
    return (0);
}