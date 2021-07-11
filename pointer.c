// char = 1byte
// short = 2byte
// int  = 4byte
// If you use 'sizeof' function, then you can realize the size of variable
// adress -> &


#include "stdio.h"
#include "string.h"

void main() {
	int* mypointer;
	int myVar = 10;

	mypointer = &myVar;
	printf("*mypointer = %d\n", *mypointer);
	printf("mypointer = %p \n", mypointer);


	*mypointer = 20;
	printf("mypointer = %d\n", *mypointer);




}