#include <stdio.h>
int main(void)
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    if (a>b)
    {
        c=a-b;
    }
    else if (a<b)
    {
        c=b-a;
    }
    printf("sum : %d\n",a+b);
    printf("difference : %d\n",c);
    printf("multiplication : %d\n",a*b);
    printf("division : %f\n", (double)a/(double)b);
    printf("remainder : %d\n",a%b);
	return 0;
}