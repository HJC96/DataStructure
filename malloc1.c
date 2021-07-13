/*
void * malloc (size_t size);
size는 바이트 값
malloc() 함수는 할당된 메모리 블럭의 첫번째 바이트에 대한 주소를 반환한다.
메모리를 할당할 수 없을 경우 NULL을 반환함.
malloc() 함수가 반환한 값은 반드시 포인터 변수가 받아야 한다.

free() 함수
동적으로 할당된 메모리 블럭의 사용이 종료되면 이 블럭을 시스템에 반납하여야 한다.
사용하지 않으면서 반납되지 않은 메모리 블럭이 자꾸 발생하게 되면 시스템의 성능이 저하된다.

*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	int* ip; // int형 변수를 가리키는 포인터변수
	double* dp; // double형 변수를 가리키는 포인터변수
	
	// 동적으로 int, double 자료형 크기의 메모리를 할당받음
	ip = (int*)malloc(sizeof(int));
	dp = (double*)malloc(sizeof(double));

	// 할당된 메모리 공간에 값을 넣는다
	*ip = 10;
	*dp = 3.4;

	printf("정수형 포인터 변수의 값: %d\n", *ip);
	printf("실수형 포인터 변수의 값: %f\n", *dp);

	// heap에서 사용할 수 있게 free
	free(ip);
	free(dp); 

	return 0;
}
