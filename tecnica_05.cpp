#include <stdio.h>
#define MAX_LENGTH 100

void inverter_string(char str[]) {
    int i, j;
    char temp;

    for (i = 0; str[i] != '\0'; i++);

    i--;

    for (j = 0; j < i; j++, i--) {
        temp = str[j];
        str[j] = str[i];
        str[i] = temp;
    }
}

int main() {
    char string[MAX_LENGTH];

    printf("Digite uma string: ");
    fgets(string, MAX_LENGTH, stdin);

    for (int i = 0; string[i] != '\0'; i++) {
        if (string[i] == '\n') {
            string[i] = '\0';
            break;
        }
    }

    inverter_string(string);

    printf("String invertida: %s\n", string);

    return 0;
}

