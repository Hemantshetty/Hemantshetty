#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,a=0,b=1,c,n;
	printf("Enter value of N: ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		if(i==0)
		{
			printf("0 ");
		}
		else if(i==1)
		{
			printf("1 ");
		}
		else
		{
			c=a+b;
			printf("%d ",c);
			a=b;
			b=c;
		}
	}
return 0;	
}
