#include <stdio.h>

int main() {
    // Your code goes here
    int total=0,gc=1,grade,average;
    while(gc<=10){
        printf("enter the grade : ");
        scanf("%d",&grade);
        total+=grade;
        gc++;
    }
    average = total/10;
    printf("Class average is %d\n",average);
    return 0;
}