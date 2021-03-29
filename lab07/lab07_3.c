#include <stdio.h>
int main()
{
	int i,j,number,temp;
	printf("enter a number:");
	scanf("%d",&number);
	for(i=2;i<=number;i++)
	{
		for(j=1;j<i;j++)
		{		
			if(i%j==0)
			{		
				temp=j;
			}
		
		}		
		if(temp>1)
		{		
			printf("%d is composite number\n", i);		
		}
	
	}
	return 0;
}
