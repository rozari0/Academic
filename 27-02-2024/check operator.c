#include <stdio.h>

int main() {
    char character;
    printf("Input a character: ");
    character = getchar();

    if (character >= 'a' && character <= 'z') {
        printf("%c is a small letter.\n", character);
    } else if (character >= 'A' && character <= 'Z') {
        printf("%c is a capital letter.\n", character);
    } else if (character >= '0' && character <= '9') {
        printf("%c is a digit.\n", character);
    } else {
        printf("%c is a special symbol.\n", character);
    }
	
	
    return 0;
}
