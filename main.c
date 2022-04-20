#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define width 168 // the width of the command line

void printUp(int height)
{
    for (int j = 0; j < height; j++)
    {
        for (int i = 0; i < width; i++)
        {
            printf("=");
        }
        printf("\n");
    }
}

void printSides(char *data)
{
    for (int i = 0; i < 14; i++)
    {
        if (i == 7)
        {
            printf("||||");
            int b = 0;
            for (size_t j = 0; j < (width / 2) - (strlen(data)); j++)
            {
                printf(" ");
                b = b + 1;
            }
            printf("%s", data);
            for (int j = 0; j < b + (int)(strlen(data)) - 8; j++)
            {
                printf(" ");
            }
            printf("||||");
        }
        else
        {
            printf("||||");
            for (int j = 0; j < (int)(width - 8); j++)
            {
                printf(" ");
            }
            printf("||||");
        }
        printf("\n");
    }
}

void printBottom(int height)
{
    for (int j = 0; j < height; j++)
    {
        for (int i = 0; i < width; i++)
        {
            printf("=");
        }
    }
}

void printScreen()
{
    printUp(2);
    char literal[] = "hello world";
    printSides(literal);
    printBottom(2);
}

int main(int argc, char const *argv[])
{
    printScreen();
    return 0;
}