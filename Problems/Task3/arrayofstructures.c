#include <stdio.h>

struct car{
    char name[10];
    unsigned int number;
};

struct time{
    int hr;
    int min;
    int sec;
};

struct details{
    struct car info;
    struct time st;
    struct time rt;
}in;

int main() {
    // Your code goes here
    printf("Enter the car name : ");
    scanf("%s", in.info.name);
    printf("\nEnter the car number : ");
    scanf("%u", &in.info.number);

    printf("\nEnter the starting time of the car\n \tHrs\tMin\tSec\n");
    scanf("\t%d\t%d\t%d",&in.st.hr,&in.st.min,&in.st.sec);
    printf("\nEnter the reaching time of the car\n \tHrs\tMin\tSec");
    scanf("\t%d\t%d\t%d",&in.rt.hr,&in.rt.min,&in.rt.sec);

    printf("Car Name\tCar Number\tStarting Time\tReaching Time\n");
    printf("%s\t\t%d\t\t%d.%d.%d\t\t%d.%d.%d",in.info.name,in.info.number,in.st.hr,in.st.min,in.st.sec,in.rt.hr,in.rt.hr,in.rt.hr);
    return 0;
}