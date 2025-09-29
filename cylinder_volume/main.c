#include <stdio.h>

int main(void) {
    double R=2, h=3;
    printf("Please enter radius:\n");
    scanf("%lf",&R);
    printf("Please enter height:\n");
    scanf("%lf",&h);
    const double pi = 3.141592653589793;
    double area = R*h*h;
    printf("The area of the circle is %lf\n",area);
    return 0;
}