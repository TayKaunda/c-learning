#include <stdio.h>

int main () {

    const double PI = 3.14159;
    double radius;
    double circumfrence;
    double area;

    printf("\n Enter radius of a circle: ");
    scanf("%lf", &radius);

    circumfrence = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nwhat is the circumfrence : %lf ", circumfrence);
    printf("\nwhat is area: %lf", area);



    return 0;
}