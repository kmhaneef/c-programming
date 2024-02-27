#include<stdio.h>

double power(double base, int exponent) {
    if (exponent == 0) {
        return 1;
    } else if (exponent > 0) {
        return base * power(base, exponent - 1);
    } else {
        // Handling negative exponent by taking reciprocal
        return 1 / (base * power(base, -exponent - 1));
    }
}

int main() {
    double base;
    int exponent;
    
    printf("Enter the base: ");
    scanf("%lf", &base);
    
    printf("Enter the exponent: ");
    scanf("%d", &exponent);
    
    double result = power(base, exponent);
    
    printf("%lf raised to the power of %d is: %lf\n", base, exponent, result);
    
    return 0;
}
