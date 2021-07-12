#include "stdio.h"
#include "string.h"


int sum(int a, int b);

void main() {

	int res = sum(10, 20); // call by value

	printf("res = %d\n", res);



}

int sum(int a, int b) {
	int result = a + b;
	return result;
}