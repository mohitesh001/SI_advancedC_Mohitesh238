#include <stdio.h>
#include <string.h>

int main() {
    int n;

    printf("Enter the number of strings: ");
    scanf("%d", &n);

    char str[n][100], temp[100];

    printf("Enter the strings:\n");
    for(int i = 0; i < n; i++) {
        scanf("%s", str[i]);
    }

// Bubble Sort
    for(int i = 0; i < n - 1; i++) {                        
        for(int j = 0; j < n - i - 1; j++) {
            if(strcmp(str[j], str[j + 1]) > 0) {
                strcpy(temp, str[j]);
                strcpy(str[j], str[j + 1]);
                strcpy(str[j + 1], temp);
            }
        }
    }

    printf("\nStrings in Alphabetical Order:\n");
    for(int i = 0; i < n; i++) {
        printf("%s\n", str[i]);
    }

    return 0;
}