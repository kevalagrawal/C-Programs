#include <stdio.h>
#include<string.h>

int main() {
    // Your code goes here
    char s1[10]="kev",s2[5]="al",s3[10]="agrawal";
    strcat(s1,s2);
    strcat(s1,s3);
    printf(s1);
    puts(strrev(s1));
    return 0;
}