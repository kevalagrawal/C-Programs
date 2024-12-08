#include <stdio.h>
#include<stdlib.h>
#include<time.h>

void open(){
    char name[30],add[30];
    printf("\nEnter the following details \n");
    printf("\nEnter your name : ");
    getchar();
    fgets(name,sizeof(name), stdin);
    int accountNumber = rand() % 9000000 + 1000000; // Generates a random 6-digit number

    printf("\nEnter the address : ");
    scanf("%s", add);

    int money;
    printf("\nInitial Deposit : $");
    scanf("%d",&money);

    printf("\nAccount Created Successfully ");
    printf("\nName : %s",name);
    printf("\nAccount Number : %d",accountNumber);
    printf("\nAddress : %s",add);
    printf("\nInitial Deposit : $%d\n",money);
    }
int get(){}
int dep(){}
int with(){}
int check(){}
int del(){}

int menu(){
    printf("_____________________________");
    printf("\nWelcome to Simple Bank System  \n\n1. Open your Account  \n2. Get Account Details  \n3. Deposit Money  \n4. Withdraw Money  \n5. Check Balance  \n6. Delete Account  \n7. Exit  \n");
    printf("_____________________________\n");
    int n;
    printf("Enter the number for the action : ");
    scanf("%d",&n);

    switch(n){
        case 1:
            open();
            break;
        case 2:
            get();
            break;
        case 3:
            dep();
            break;
        case 4:
            with();
            break;
        case 5:
            check();
            break;
        case 6:
            del();
            break;
        case 7:
            printf("Exiting the system...");
            exit(0);
        default:
            printf("Enter valid number !");
            break;
    }
}

int main() {
    // Your code goes here
    srand(time(0));
    while(1){
    menu();
    }
    return 0;
}