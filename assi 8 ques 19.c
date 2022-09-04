#include<stdio.h>
int main()
{
	int i,j;
	for(i=1;i<=3;i++)
	{
		for(j=1;j<=19;j++)
		{
			if((j>=4-i&&j<=i+6)||(j>=13-i&&j<=16+i))
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
	printf("******MYSIRG ******\n");
	for(i=4;i<=12;i++)
	{
		for(j=1;j<=18;j++)
		{
			if(j>=i-2&&j<=22-i)
			printf("*");
			else
			printf(" ");
		}
		printf("\n");
	}
}