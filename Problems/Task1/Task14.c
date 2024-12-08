// Quadratic Equation Roots

#include <stdio.h>
#include<math.h>

int main() {
    // Your code goes here
    float a,b,c,d,r1,r2;

    printf("Enter the values of a, b, and c : \n");
    scanf("%f%f%f", &a,&b,&c);

    d = (b*b) - (4*a*c);

    if(d==0){
        printf("The roots are real and equal.");
        r1 = -b/(2*a);
        r2 = -b/(2*a);
        printf("Therefore the roots are %f and %f",r1,r2);
    }
    else if(d<0){
        printf("The roots are imaginary.");
    }
    else{
        printf("The roots are real and different.");
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("Therefore the roots are %f and %f",r1,r2);
    }
    return 0;
}