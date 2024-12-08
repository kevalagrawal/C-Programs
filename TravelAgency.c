//you manage a travel agency and you want your drivers to input the following details
/* 
1. name 
2. licence number
3. route
4. kms

your program should be able to take n as input

your program should print details of the drivers in a beautiful fashion
*/

#include <stdio.h>

    typedef struct travelagency{
        char name[10];
        char lno[10];
        char route[50];
        int kms;
    }ta;

int main() {
    // Your code goes here
    ta d1,d2,d3;
    printf("Enter the details of the driver\n\n");
    printf("Enter the name of first driver : \n");
    scanf("%s",&d1.name);
    printf("Enter the license number of first driver : \n");
    scanf("%s",&d1.lno);
    printf("Enter the route of first driver : \n");
    scanf("%s",&d1.route);
    printf("Enter the kms of first driver : \n");
    scanf("%s",&d1.kms);

    printf("Enter the name of second driver : \n");
    scanf("%s",&d2.name);
    printf("Enter the license number of first driver : \n");
    scanf("%s",&d2.lno);
    printf("Enter the route of first driver : \n");
    scanf("%s",&d2.route);
    printf("Enter the kms of first driver : \n");
    scanf("%s",&d2.kms);

    printf("Enter the name of third driver : \n");
    scanf("%s",&d3.name);
    printf("Enter the license number of first driver : \n");
    scanf("%s",&d3.lno);
    printf("Enter the route of first driver : \n");
    scanf("%s",&d3.route);
    printf("Enter the kms of first driver : \n");
    scanf("%s",&d3.kms);

    printf("*****Printing information of these drivers******\n");
    printf("For Driver No.1:\nName is : %s\nLicense Number is : %s\nRoute is : %s\nNumber of Kms : %d",d1.name,d1.lno,d1.route,d1.kms);
    printf("For Driver No.2:\nName is : %s\nLicense Number is : %s\nRoute is : %s\nNumber of Kms : %d",d2.name,d2.lno,d2.route,d2.kms);
    printf("For Driver No.3:\nName is : %s\nLicense Number is : %s\nRoute is : %s\nNumber of Kms : %d",d3.name,d3.lno,d3.route,d3.kms);
    return 0;
}