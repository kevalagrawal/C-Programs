#include <stdio.h>

typedef struct book
{
    /* data */
    char name[25];
    char author[25];
    int pages;
}b;


int main() {
    // Your code goes here
    b b1={"Java","Keval",234};
    b *ptr;
    ptr = &b1;
    printf("%s    %s     %d\n",b1.name,b1.author,b1.pages);
    printf("%s    %s     %d",(*ptr).name,ptr->author,ptr->pages);
    return 0;
}