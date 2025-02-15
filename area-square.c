#include <stdio.h>

int main() {
    float side, area;
    printf("\n");
    printf("|----------------------------------|\n");
    printf("| Area of a Square Calculator      |\n");   
    printf("|----------------------------------|\n");
    printf("| Formula Area = side x side       |\n");
    printf("|----------------------------------|\n");
    printf("\n");

    printf("Enter the side of the square: ");
    scanf("%f", &side);

    area = side * side;

    printf("Area of the square: %.2f\n", area);

    return 0;
}