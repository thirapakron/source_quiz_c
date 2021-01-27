#include<stdio.h>

void main(){
    system("cls");
    
    int i,num;
    printf("Enter a number: ");
    scanf("%d",&num);
    
    printf("Even number of %d terms are :-\n",num);
    for(i=1; i<= 2*num; i++){
        if(i%2 == 1)
            continue;
        else
            printf("%d,",i);

    }

}