#include <stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n);
	for(int i=1; i<n;i++)
	{
        for(int j=1; j<=n-i; j++)
		{
		    printf(" ");
		}

        for(int k=1; k<=i-1; k++)
	    {
		    printf("* ");	
	    }   
	    printf("*");

        for(int j=0; j<n-i; j++)
        {
            printf(" ");
        }
        printf("\n");
	}
	for(int i=n; i>0;i--)
	{
        for(int j=1; j<=n-i; j++)
		{
		    printf(" ");
		}

        for(int k=1; k<=i-1; k++)
	    {
		    printf("* ");	
	    }   
	    printf("*");

        for(int j=0; j<n-i; j++)
        {
            printf(" ");
        }
        printf("\n");
	}    
	return 0;
}
