//Print all prime numbers between 1 to n

#include<stdio.h>

int main()
{
	int n,i,j,c;
	printf("Enter range: ");
	scanf("%d",&n);
	if(n<=2)
	{
		printf("No prime number present.");
	}
	else
	{
	
		for(i=1;i<n;i++)
		{
			c=0;
			for(j=2;j<=i/2;j++)
			{
				if(i%j==0)
				{
					c++;
					break;
				}
			}
			if(c==0 && i!=1)
			printf("%d ",i);
		}
	
	}
	return 0;
}
