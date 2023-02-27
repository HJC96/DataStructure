#include <stdio.h>
#include <string.h>

#pragma warning(disable:4996)

struct Person {
	char name[100];
	int age;
	int height;
	float weight;
};

struct Point2D {
	int x;
	int y;
};


int main(int argc, const char* argv[]) {

	struct Person personA, personB;

	strcpy(personA.name, "Hong Gil Dong");
	personA.age = 20;
	personA.height = 179;
	personA.weight = 73.2;

	strcpy(personB.name, "Hong Gil Sun");
	personB.age = 23;
	personB.height = 166;
	personB.weight = 58.2;

	struct Point2D p1, p2;
	p1.x = 100;
	p1.y = 100;

	p2 = p1; //±¸Á¶Ã¼ º¹»ç

	struct Person personC = { "Park", 40, 170, 66 };
	printf("personCÀÇ ÀÌ¸§ = %s, ³ªÀÌ = %d\n", personC.name, personC.age);



	return 0;

}
