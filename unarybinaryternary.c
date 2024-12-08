    #include <stdio.h>
    
    // int main() {
    //     // Your code goes here
    //     int x=9,y;
    //     y=x++;
    //     printf("%d\n",y);
    //     y=++x;
    //     printf("%d\n",y);
    //     return 0;
    // }

    int main(void){
        int n;
        printf("enter the number : ");
        scanf("%d",&n);
        n>0?printf("+ve"):(n<0?printf("-ve"):printf("the number is zero"));
        return 0;
    }