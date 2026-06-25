// WACP read the input integer char and float and print it 
#include <stdio.h>

int main() {
    int num;
    char ch;
    float f;

    printf("Enter an integer: ");
    scanf("%d", &num);

    printf("Enter a character: ");
    scanf(" %c", &ch);  

    printf("Enter a float: ");
    scanf("%f", &f);

    printf("\n  Integer = %d", num);
    printf("\n  Character = %c", ch);
    printf("\n  Float = %f", f);

    return 0;
}