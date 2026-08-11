#include <stdio.h>
#include <math.h>
#define pii 3.14159
void circle(float radius){

    float diameter , circumference , area ;

    diameter = radius * 2;
    circumference = (2 * pii * radius);
    area = (pii * pow(radius,2) );

    printf("Diameter: %.3f\n", diameter);
    printf("Circumference: %.3f\n", circumference);
    printf("Area: %.3f\n", area);

}

int main() {
   circle(5.6);
   return 0;
  
}