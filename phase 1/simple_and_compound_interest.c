// simple and compound interest calculate
#include <stdio.h>
#include <math.h>

int main() {
    float P, R, T, SI, CI, Amount;

    printf("Enter Principal, Rate and Time: ");
    scanf("%f %f %f", &P, &R, &T);

    
    SI = (P * R * T) / 100;

    // it is use for the compound interest
    Amount = P * pow((1 + R / 100), T);
    CI = Amount - P;

    printf("\nSimple Interest = %.2f", SI);
    printf("\nCompound Interest = %.2f", CI);

    return 0;
}