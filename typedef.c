+// typedef? Defining an existing datatype as a new datatype
+// How? typedef original new ;
+// (example)typedef unsigned char BYTE ;
#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

typedef struct Person {
	char name[100];
	int age;
	int height;
	float weight;
} Person;
// typedef

typedef struct Point2D {
	int x;
	int y;
} Point;

Point translate(Point P, Point delta); // new data type
int main(int argc, const char* argv[]) {

	//	struct Person personA, personB;
	Person personA, personB;

	strcpy(personA.name, "Hong Gil Dong");
	personA.age = 20;
	personA.height = 179;
	personA.weight = 73.2;

	strcpy(personB.name, "Hong Gil Sun");
	personB.age = 23;
	personB.height = 166;
	personB.weight = 58.2;



	Point p = { 2, 3 };
	Point delta = { 10, 10 };
	Point result;
	result = translate(p, delta);
	printf("새로운 점의 좌표는 (%d, %d)입니다. \n", result.x, result.y);


	return 0;

}

Point translate(Point P, Point delta)
{
	Point new_p;
	new_p.x = P.x + delta.x;
	new_p.y = P.y + delta.y;
	return new_p;
}
