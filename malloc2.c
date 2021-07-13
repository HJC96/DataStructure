#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {

	int *score;
	int i;
	
	// 100 * sizeof(int) 바이트 만큼의 메모리를 동적으로 할당함.
	score = (int*)malloc(100 * sizeof(int));
	
	if (score == NULL)
	{
		printf("동적 메모리 할당 오류\n");
		exit(1);
	}
	for (i = 0; i < 100; i++)
	//	score[i] = i;
		*(score+i) = i ;
	free(score);

	return 0;
}
