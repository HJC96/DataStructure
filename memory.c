#include "stdio.h"
#include "string.h"

int main(int argc, char* argv[]) {
	int n[1000]; // 4byte * 1000

	n[0] = 10;

	printf("n[0] = %d\n", n[0]);
	// n[1] ... n[999]까지의 메모리는 할당되었으나 사용되지 않음.

	return 0;

}
