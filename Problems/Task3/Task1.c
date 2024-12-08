//**Problem**: Define a structure `Book` with fields for title, author, and price. Create a book instance and print its details.

#include <stdio.h>

typedef struct book{
    char name[50];
    char author[15];
    int rating;
}Book;

int main() {
    // Your code goes here
    Book book1 = {"The Great Gatsby","Gatsby", 10.5};
    printf("Book Name : %s\n",book1.name);
    printf("Book Author : %s\n",book1.author);
    printf("Book Rating : %d\n",book1.rating);
    return 0;
}