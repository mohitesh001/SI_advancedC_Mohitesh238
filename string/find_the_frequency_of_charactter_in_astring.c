#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for(int i = 0; str[i] != '\0'; i++) {
        freq[(unsigned char)str[i]]++;
    }

    printf("\nCharacter Frequencies:\n");

    for(int i = 0; str[i] != '\0'; i++) {
        if(freq[(unsigned char)str[i]] != 0 && str[i] != '\n') {
            printf("%c = %d\n", str[i], freq[(unsigned char)str[i]]);
            freq[(unsigned char)str[i]] = 0;  
        }
    }

    return 0;
}