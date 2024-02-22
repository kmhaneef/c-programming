#include <stdio.h>
void calculateRectangleProperties(float length, float width, float *area, float *perimeter) {
    *area = length * width;
    *perimeter = 2 * (length + width);
}
int main() {
    float length, width;
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);

    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);
    float area, perimeter;
    calculateRectangleProperties(length, width, &area, &perimeter);
    printf("Area of the rectangle: %.2f\n", area);
    printf("Perimeter of the rectangle: %.2f\n", perimeter);
    return 0;
}
