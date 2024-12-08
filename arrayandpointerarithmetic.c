 #include <stdio.h>
 
 int main() {
     // Your code goes here
     int a = 34;
     int *ptr = &a;
     printf("%d\n",ptr);
     printf("%d\n",ptr++);
     printf("%d\n",ptr+1);
     printf("%d\n",ptr-1);
     printf("%d\n",ptr--);
     printf("%d\n",sizeof(int));
     return 0;
 }