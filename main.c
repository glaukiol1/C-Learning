#include <stdio.h>

struct data
{
    int world;
};

int main(int argc, char const *argv[])
{
   float a1, an;
   int n;
   printf("Enter a1: ");
   scanf("%f", &a1);
   printf("Enter an: ");
   scanf("%f", &an);
   printf("Enter number of elements: ");
   scanf("%d", &n);

   float result = (a1 + an) * ((double)n/2);

   printf("Sum: %f\n", result);
}