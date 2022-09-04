#include<stdio.h>
int main()
{
	int i,j;
	printf("*********\n");
	for(i=2;i<=5;i++)
	{
		for(j=1;j<=9;j++)
		{
			if(j==i||j==10-i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}