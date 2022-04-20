#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    int n = 30;
    int money = 1;

    for (int i = 0; i < n; i++) {
        printf("$%.2lf in day %d\n", money/100.00, i+1);
        money = money * 2;
    }
    printf("Total amount after 30 days: $%.2lf\n", money/100.00);
    return 0;
}