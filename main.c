#include <stdio.h>

int main(int argc, char const *argv[])
{
    double height;
    double width;
    printf("Enter rectangle height: ");
    scanf("%lf", &height);
    printf("Enter rectangle width: ");
    scanf("%lf", &width);
    printf("Rectangle Area: %f\n", height*width);
    printf("Rectangle Perimeter: %f\n", (height*2)+(width*2));
    return 0;
}