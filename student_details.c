#include <stdio.h>
#include <unistd.h>
#include <string.h>

int main()
{
	char name[50], registration[50], course[50], lecturer[50], ethnicity[20];
	
	printf("\n\n");
	printf("\t\t            ......................UNIVERSITY OF EMBU.......................       \n");
	printf("\t\t..................................................................................\n");
	sleep(0.75);
	putchar('\n');
	printf("\t\tWelcome, Student. Please Fill out the form below\n\n");
	printf("\t\tName:  ");
	fgets(name, 50, stdin);
	name[strlen(name) - 1] = '\0';
	printf("\t\tRegistration number:  ");
	fgets(registration, 50, stdin);
	registration[strlen(registration) - 1] = '\0';
	printf("\t\tCourse:  ");
	fgets(course, 50, stdin);
	course[strlen(course) - 1] = '\0';
	printf("\t\tLecturer's name:  ");
	fgets(lecturer, 50, stdin);
	lecturer[strlen(lecturer) - 1] = '\0';
	printf("\t\tEthnicity: ");
	fgets(ethnicity, 20, stdin);
	ethnicity[strlen(ethnicity) - 1] = '\0';
	sleep(0.75);
	printf("\t\t.................................................................\n");
	printf("\n\n\t\tHello %s(%s), You have been enrolled to Bsc. %s \n\t\ttaught by %s. \n", name, registration, course, lecturer);
	printf("\t\tYour ethnicity is %s\n\n", ethnicity);
	return 0;
}
	
