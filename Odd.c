#include<stdio.h>

void main(){
    system("cls");

    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);

    printf("Odd number of %d terms are :-\n",n);
    for(i=1; i<= 2*n; i++) {
        if(i%2 == 0)
            continue;
        else
            printf("%d,",i);      
        
    }

}