// buble sort
#include<stdio.h>
int main()
{
	int i,j,n,flag =1, temp, a[50];
	printf("enter the size of array");
	scanf("%d",&n);
	printf("enter the elements");
	for(i = 0; i<n; i++)
	scanf("%d", &a[i]);  
	
	
	for(i=0; i<n-1; i++)

	{
	for(j=0; j<n-1-i; j++)
	{
		if (a[j] > a[j+1])
		{
			temp = a[j];
			a[j] = a [j+1];
			a[j+1] = temp;
		}
	}
	
		
	}
	printf("the sorted array is");
	for(i=0; i<n; i++)
	printf("%d",a[i]);
	return 0;
	
	
	
	
	
	
}


