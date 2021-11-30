#include<stdio.h>
int main()
{
	int i,n, count = 0 ;
	printf("enter the number\n");
	scanf("%d", &n);
	for( i=0; i<=n; i++)
	{
		if(n%i==0)
    {
    	count++;
	}
		if(count==2)
    	printf("%d is a prime number");
    	break;
     	
		
	}
	
		
	

	
	
	
	
	
	
	return 0;
}
