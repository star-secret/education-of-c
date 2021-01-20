#include <stdio.h>
int main(void)
{
    int n,r,output;
    scanf("%d %d",&n,&r);
    output = combination(n,r);
    printf("%d\n",output);
	return 0;
}

int combination(int n, int r)
{
    if(r==0||n==r)
    {
        return 1;
    }
    else if (n>r)
    {
        return combination(n-1,r) + combination(n-1,r-1);
    }
    return 0;
}