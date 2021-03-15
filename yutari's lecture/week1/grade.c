#include <stdio.h>
int main(void)
{
    int a;
	scanf("%d",&a);
	printf("Score : %d\n",a);
    if(90<=a)
    {
        printf("Your grade is A\n");
    }
    else if(80<=a && 90>=a)
    {
        printf("Your grade is B\n");
    }
    else if(70<=a && 80>=a)
    {
        printf("Your grade is C\n");
    } 
    else
    {
        printf("Your grade is D\n");
    } 
	return 0;
}