#include <stdio.h>

int main() {
    char str[100];
    int vowels = 0, consonants = 0, digits = 0, spaces = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {

    
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
           str[i] == 'O' || str[i] == 'U' ||
           str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
           str[i] == 'o' || str[i] == 'u') {
            vowels++;
        }

        else if((str[i] >= 'A' && str[i] <= 'Z') ||
                (str[i] >= 'a' && str[i] <= 'z')) {
            consonants++;
        }

        else if(str[i] >= '0' && str[i] <= '9') {
            digits++;
        }

        // Count spaces
        else if(str[i] == ' ') {
            spaces++;
        }
    }

    printf("\nVowels      = %d", vowels);
    printf("\nConsonants  = %d", consonants);
    printf("\nDigits      = %d", digits);
    printf("\nSpaces      = %d", spaces);

    return 0;
}