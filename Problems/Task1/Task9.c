//Angle of trigonometric functions

#include <stdio.h>
#include<math.h>
#define PI 3.14

int main() {
    // Your code goes here
    float n1,n2;
    printf("Enter the angle in degrees : ");
    scanf("%f", &n1);
    n2 = (n1*PI)/180;
    printf("The value of the trigonometric functions is sin is %f", sin(n2));
    printf("\nThe value of the trigonometric functions is cos is %f", cos(n2));
    printf("\nThe value of the trigonometric functions is tan is %f", tan(n2));
    printf("\nThe value of the trigonometric functions is tan is %f", log10(n1));
    return 0;
}