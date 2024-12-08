#include <stdio.h>
#include<conio.h>

// struct charset{
//     char s;
//     int i;
// };

// void keyvalue(char *s,int *i){
//     scanf("%c %d",*s,i);
// }

// int main() {
//     // Your code goes here
//     int j;
//     struct charset cs;
//     keyvalue(&cs.s,&cs.i);
//     printf("%c %d",cs.s,cs.i);
//     return 0;
// }

// int main(){
//     float a[]={1,2,3,4,5};
//     int len=sizeof(a)/sizeof(a[0]);
//     printf("%d\n",len);
//     return 0;
// }

int *findmin(int a[], int n){
    return &a[n/2];
}

int main(){
    int a[]={1,2,3,4,5};
    int n = sizeof(a)/sizeof(a[0]);
    int *mid = findmin(a,n);
    printf("%d",*mid);
    return 0;
}