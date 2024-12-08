#include <stdio.h>

void printstr(char stri[]){
    int i=0;
    while(stri[i]!='\0'){
        printf("%c",stri[i]);
        i++;
    }
}

int main() {
    // Your code goes here
    char str[]="keval";
    printstr(str);
    printf("\nthe string is : %s",str);
    char name[6]="keval";
    printf("\nthe string now is %s\n",name);
    char input[5];
    gets(input);
    puts(input);
    return 0;
}