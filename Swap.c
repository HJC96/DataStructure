#include <stdio.h> 
#include <string.h> 


void Swap(int* px, int* py);

int main(int argc, char* argv[]) {

	int a = 100, b = 200;
	printf("a = %d, b = %d\n", a, b);
	Swap(&a, &b);
	printf("a = %d, b = %d\n", a, b);


}

void Swap(int* px, int* py) {

	int tmp;

	tmp = *px;
	*px = *py;
	*py = tmp;

}
