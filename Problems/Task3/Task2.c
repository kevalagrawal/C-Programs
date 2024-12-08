//**Problem**: Define a structure `Student` with fields for name and marks. Create an array of students and print their details.

#include <stdio.h>

typedef struct students{
    char name[15];
    int marks;
}S;

int main() {
    // Your code goes here
    S student[3] = {
        {"keval",35},
        {"harry",40},
        {"krishil",45}
    };
    for(int i=0;i<3;i++){
    printf("Name : %s \nGrade : %d",student[i].name,student[i].marks);
    printf("\n");
    }

    return 0;
}