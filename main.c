#include <stdio.h>

struct data
{
    int world;
};

int main(int argc, char const *argv[])
{
   float data;
   printf("Enter float: ");
   scanf("%f", &data);
   printf("Decimal: %f\n", data - ((int) data));
   return 0;
}