#include <stdio.h>
#define MAX 10

void func(const int b[],size_t sos,size_t size);

int main(void) {
    // Your code goes here
    int p[MAX] = {5,7,2,1,0,4,3,0,6,8};
    puts("Result is : ");
    func(p,0,MAX);
    puts("");
}

void func(const int b[],size_t sos, size_t size){
    if(sos<size){
        printf("%d ",b[sos]*5);
        func(b,sos+1,size);
    }
}