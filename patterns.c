// #include <stdio.h>

// int main() {
//     // Your code goes here
//     int n;
//     printf("Enter the rows : ");
//     scanf("%d",&n);
//     for(int i=0;i<5;i++){
//         for(int j=0;j<21;j++){
//             if(i+j%4==(n-1)||i==j%4){
//                 printf("X");
//             }
//             else
//             printf(" ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

#include <stdio.h>

int main() {
    // Your code goes here
    for(int i=0;i<5;i++){
        for(int j=0;j<26;j++){
            if(i==j%8 || i+j%8==8){
                printf("%c",'a');
            }
                else
                printf(" ");
        }
            printf("\n");
    }
    return 0;
}