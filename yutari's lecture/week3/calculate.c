#include <stdio.h>
void getSumDiff(int a, int b, int *pSum, int *pDiff)
{
    *pSum=a+b;
    *pDiff=a-b;
}

int main(void)
{
    int a,b,sum,dif;
    scanf("%d %d",&a,&b);
    getSumDiff(a,b,&sum,&dif);
    printf("Sum is %d\n",sum);
    printf("Diff is %d\n", dif);
    return 0;
}