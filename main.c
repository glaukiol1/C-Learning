// #include <stdlib.h>
#include <stdio.h>
// #include <string.h>

#define myFunction(X) _Generic((X), \
    int *:   myFunctionInt,         \
    float *: myFunctionFloat,       \
    default: myFunctionDefault      \
)(X)

void myFunctionInt(int *f) {
    printf("myFunctionInt: %d\n", *f);
}

void myFunctionFloat(float *f) {
    printf("myFunctionFloat: %f\n", *f);
}

void myFunctionDefault(void *f) {
    printf("myFunctionDefault %p\n", f);
}

int main() {
    int a = 10;
    myFunction(&a); // myFunctionInt
    float b = 10.0;
    myFunction(&b); // myFunctionFloat
    double c = 10.00;
    myFunction(&c); // myFunctionDefault
    return 0;
}