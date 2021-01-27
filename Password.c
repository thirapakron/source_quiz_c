#include <stdio.h>
int main() {
	int pw, x=10;	

	while (x!=0)
	{
	printf("\nInput the password: ");
	scanf("%d",&pw);	
	
	if (pw==1234)
	{
		printf("Correct password");
		x=0;
    }
    else
    {
       printf("Wrong password,try another");       
	}
	printf("\n");
   }
	return 0;
} 
