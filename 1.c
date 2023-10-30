#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main () 
{
    char *str1 = (char*)malloc(128);
    char *str2 = (char*)malloc(128);
    printf("введите первую строку: ");
    scanf("%127s", str1);
    printf("введите сторую строку: ");
    scanf("%127s", str2);

    if(strcmp(str1, str2) == 0)
    printf("Строки равны\n");
    else
    printf("Строки различаются\n");

    return 0;
}