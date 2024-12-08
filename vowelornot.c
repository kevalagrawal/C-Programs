#include <stdio.h>

int main() {
    // Your code goes here
    char arr[5]={'a','e','i','o','u'};
    char c;
    int count=0;
    printf("Enter the character : ");
    scanf("%c",&c);
    for(int i=0;i<5;i++){
        if(arr[i]==c){
            count+=1;
        }
    }
    if(count==1){
        printf("Vowel");
    }
    else
    printf("Consonant");
    return 0;
}