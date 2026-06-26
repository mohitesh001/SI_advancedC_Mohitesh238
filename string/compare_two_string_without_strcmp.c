#include <stdio.h>

int main() {
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while(str1[i] != '\0' && str2[i] != '\0') {
        if(str1[i] != str2[i]) {
            break;
        }
        i++;
    }

    if(str1[i] == '\0' && str2[i] == '\0') {
        printf("Both strings are equal.");
    }
    else {
        printf("Both strings are not equal.");
    }

    return 0;
}