#include <stdio.h>

struct data
{
    int world;
};

int main(int argc, char const *argv[])
{
   float seconds;
   printf("Enter Seconds: ");
   scanf("%f", &seconds);
   int hours = seconds/3600;
   int minutes = (seconds - (hours*3600)) / 60;
   int cseconds = (int) (seconds - (hours*3600)) % 60;
   printf("%02d:%02d:%02d\n", hours, minutes, cseconds);
   return 0;
}