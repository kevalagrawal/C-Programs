#include <stdio.h>
#define SIZE 6

int whatisthis(const int b[], size_t p){
    if (p==1){
        return b[0];
    }
    else
    return b[p-1]*whatisthis(b,p-1);
}

int main(void) {
    // Your code goes here
    int x;
    int a[SIZE] = {1,2,3,4,5,6};
    x = whatisthis(a, SIZE);
    printf("Result is %d\n",x);
    return 0;
}