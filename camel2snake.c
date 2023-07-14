#include <stdio.h>
#include <ctype.h>
#include <string.h>

void camel2snake(char *n) {
    int len = strlen(n);
    char snake[2 * len];  // Assuming the maximum possible length of the converted string

    int j = 0;
    for (int i = 0; i < len; i++) {
        if (isupper(n[i])) {
            snake[j++] = '_';
            snake[j++] = tolower(n[i]);
        } else {
            snake[j++] = n[i];
        }
    }
    snake[j] = '\0';

    printf("snake_case: %s\n", snake);
}

int main() {
    char camel[100];  // Assuming a maximum input length of 100 characters

    printf("camelCase: ");
    scanf("%s", camel);

    camel2snake(camel);

    return 0;
}
