#include<stdio.h>
int main()
{
	int i,j,k,p;
	for(i=1;i<=4;i++)
	{   p=1,k=1;
		for(j=1;j<=7;j++)
		{     
			if(j>=5-i&&j<=i+3)
			{
			printf("%d",k);
			(j<4)?k++:k--;
			 }
			else
			printf(" ");
			
		}
		printf("\n");
	}
}