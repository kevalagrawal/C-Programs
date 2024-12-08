#include <stdio.h>
#include<stdlib.h>
#include<time.h>

int generate(int n){
    srand(time(NULL));
    return rand()%n;
}

int greater(char c1,char c2){
    //returns 1 if c1>c2 and 0 otherwise. if c1=c2 it will return -1
    if(c1==c2){
        return -1;
    }
    else if(c1=='s' && c2=='r'){
        return 1;
    }
    else if(c1=='p' && c2=='s'){
        return 1;
    }
    else if(c1=='r' && c2=='p'){
        return 1;
    }
    else if(c1=='p' && c2=='r'){
        return 0;
    }
    else if(c1=='r' && c2=='s'){
        return 0;
    }
    else if(c1=='s' && c2=='p'){
        return 0;
    }
}

int main() {
    // Your code goes here
    int pscore = 0, cscore = 0,temp;
    char pchar, cchar;
    printf("Welcome to the Rock-Paper_Scissor\n\n");
    for(int i=0;i<3;i++){
    char dict[] = {'r','p','s'};
    printf("Choose 1 for rock, 2 for paper and 3 for scissor\n");
    printf("Player 1's turn : \n");
    scanf("%d",&temp);
    pchar = dict[temp-1];
    printf("You chose %c\n\n",pchar);
    
    printf("Choose 1 for rock, 2 for paper and 3 for scissor\n");
    printf("Computer's turn : \n");
    temp = generate(3) + 1;
    cchar = dict[temp-1];
    printf("Computer chose %c\n\n",cchar);

    if(greater(pchar,cchar)==1){
        cscore += 1;
        printf("CPU got it\n");
    }
    else if(greater(pchar,cchar)==-1){
        cscore = 0;
        pscore = 0;
        printf("Its a draw\n");
    }
    else{
        pscore += 1;
        printf("You got it\n");
    }
    printf("\n\nYou : %d \nCPU : %d \n",pscore,cscore);
    }
    if(pscore>cscore){
        printf("You win");
    }
    else if(pscore<cscore){
        printf("Computer win");
    }
    else
    printf("Its a draw");
    return 0;
}
