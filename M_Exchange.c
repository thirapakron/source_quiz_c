#include<stdio.h>

void main(){
  int x,y;

  printf("Enter Exchange Money: ");
  scanf("%d",&x);

  y=x/1000;
  printf("1000 bath: %d\n",y);
  x = x%1000;

  y=x/500;      
  printf("500 bath: %d\n",y);    
  x = (x%500);

  y=x/100;
  printf("100 bath: %d\n",y);    
  x = (x%100);

  y=x/50;
  printf("50 bath: %d\n",y);    
  x = (x%50);

  y=x/20;
  printf("20 bath: %d\n",y);    
  x = (x%20);

  y=x/10;
  printf("10 bath: %d\n",y);    
  x = (x%10);

  y=x/5;
  printf("5 bath: %d\n",y);    
  x = (x%5);

  y=x/2;
  printf("2 bath: %d",y);    
  x = (x%2);

  y=x/1;
  printf("1 bath: %d",y);    
  x = (x%1);
}