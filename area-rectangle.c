#include <stdio.h>

int main(){
    float length, width, area;

    printf("---------------------------------- \n");
    printf("  Formula: Area = length X width \n");
    printf("---------------------------------- \n");
    printf("Enter the length of the rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of the rectangle: ");
    scanf("%f", &width);

    area = length * width;
    
    printf("Calculated: Area = %.2f X %.2f = %.2f \n", length, width, area);
    printf("The area of the rectangle is %.2f \n", area);
    return 0;

}