#include <stdio.h>
#include <string.h>

int main(){
    char name[25];
    char grade;
    printf("Name: ");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';
    printf("Grade: ");
    scanf("%c", &grade);
    printf("Hello, %s\n", name);
    grade = toupper(grade);
    switch(grade){
        case('A'):
            printf("Pass");
            break;
        case('B'):
            printf("Good");
            break;
        case('C'):
            printf("Average");
            break;
        case('D'):
            printf("Work Harder");
            break;
        case('E'):
            printf("Fail");
            break;
        default:
            printf("Invalid Grade");
    }
    return 0;
}
