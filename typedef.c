#include <stdio.h>
#include <string.h>

typedef struct
{
	char name[20];
	int age;
	char country[20];
}Students;

int main()
{
	Students student1 = {"Alex", 16, "Kenya"};	
	Students student2 = {"Mwaniki", 17, "Kenya"};
	Students student3 = {"Nyambura", 18, "Kenya"};

	Students list[] = {student1, student2, student3};
	for (int i = 0; i < sizeof(list) / sizeof(list[0]); i++)
	{
		printf("%s\n", list[i].name);
	}

	return 0;
}
