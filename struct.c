#include <stdio.h>
#include <string.h>

struct Students
{
	char name[20];
	int age;
	char country[20];
};

int main()
{
	struct Students student1;
	
	strcpy(student1.name, "Alex");
	student1.age = 18;
	strcpy(student1.country, "Kenya");

	printf("Hello %s, You are %d and country is %s\n", student1.name, student1.age, student1.country);
	return 0;
}
