#include <stdio.h>
#include <stdlib.h>

int main()
{
    int integer = 99;
    char character = 'D';
    double double_number = 1.3;

    void *ptr;


    ptr = &integer;
    printf("interger: %d\n", *((int*)ptr));

    ptr = &character;
    printf("character: %c\n", *((char*)ptr));

    ptr = &double_number;
    printf("double_number: %f\n", *((double*)ptr));
}
