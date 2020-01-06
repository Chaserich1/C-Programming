#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    double width = 5, height = 10, perimeter, area;

    perimeter = (height + width) / 2;
    area = width * height;

    printf("The width of the rectangle is: %.2f\n", width);
    printf("The height of the rectangle is: %.2f\n", height);
    printf("The perimeter of the rectangle is: %.2f\n", perimeter);
    printf("The area of the rectangle is: %.2f", area);

    return 0;
}
