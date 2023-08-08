#include <stdio.h>
//#include <string.h>

int main(){
    char name[25];
    int age;
    printf("What is your name: ");
    fgets(name, 25, stdin);
    name[strlen(name)-1] = '\0';
    printf("How old are you: ");
    scanf("%d", &age);
    printf("Hello %s.\nYou are %d years old",name, age);
    return 0;
}
