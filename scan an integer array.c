//scan an array
#include<stdio.h>
int main()
{
	int a[100], n , i, j;
	printf("enter the array size");
	scanf("%d", &n);
	printf("enter the elements of array ");
	for(i = 0; i <= n-1; i++)
	{
		scanf("%d", &a[i]);
	}
	for(j=0; j < i; j++)
	{
		printf("%d", a[j]);
	
	}

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
