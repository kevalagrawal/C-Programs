//Pointer and address
#include <stdio.h>

int main() {
    // Your code goes here
    int a=10;
    int *ptr=&a;
    printf("The address of a is %x\n",ptr);
    printf("The address of a is %x\n",&a);
    printf("The address of pointer is %x\n",&ptr);
    printf("The value of a is %d\n",*ptr);
    printf("The address of a is %d\n",a);
    return 0;
}