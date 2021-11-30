// matrix array
#include<stdio.h>
int main()
{
	int a[4][3];
	int i,j;
	printf("enter the value of matrix row wise");
	for(i = 0; i<=3; i++)
	{
		for(j=0; j<=2;j++)
		{
		scanf("%d", &a[i][j]);
		}
		
		
		
	}
// display content of array
for(i = 0; i<=3; i++)
	{
		for(j=0; j<=2;j++)
		{
		printf("%d", a[i][j]);
		}
		printf("\n");
	
	}

		
		
	
	
	
	
	return 0;
}
