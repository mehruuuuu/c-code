//string length
#include<stdio.h>
int main()
{
	char a[100];
	int i, l=0;
	printf("enter the string");
	gets(a);
	
	for(i =0; a[i] != '\0'; i++)
	{
		l++;
		
	}
	printf("the length of string = %d", l);
	for(i=0; a[i] !='\0'; i--)
	printf("reverse string = %d",a[i]);
	return 0;
	
	
	
	
	

}
