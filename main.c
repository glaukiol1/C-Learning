// #include <stdlib.h>
#include <stdio.h>
// #include <string.h>

int strlen(char *str) {
    int len = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}

int main() {
    char * str;
    gets(str);
    int ln = strlen(str);
    printf("Length of string: %d\n", ln);
    return 0;
}