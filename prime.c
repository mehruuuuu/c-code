//* find prime numbers between 1 to 300
#include<stdio.h>
int main()
{
	int i,n;
	printf("enter the numbers between 1 and 300\t");
	for(n=1; n<=300; n++)
	{
		
		for(i=2;i<n; i++)
		{
			if(n%i == 0)
			break;
			
		
			
		}
		if (i == n)
		printf("%d\t", n);
	}
	
	
	
	
	
	
	
	return 0;
}
