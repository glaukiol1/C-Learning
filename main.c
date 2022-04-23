// #include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main() {
    char * str;
    gets(str);
    int ln = strlen(str);
    printf("Length of string: %d\n", ln);
    return 0;
}