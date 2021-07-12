#include "stdio.h"
#include "string.h"

void change(int* ptr);

void main() {
	int num = 10;

	printf("num = %d\n", num);

	change(&num); // call by reference

	printf("num = %d\n", num);


}

void change(int* ptr)
{
	*ptr = 20;

}