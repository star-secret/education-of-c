#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    int *p = (int*)malloc(sizeof(int)*5);
    for (int k =0;k<5;k++)
    {
        scanf("%d", (p+k));
    }
    for (int j =4;j>=0;j--)
    {
        printf("%d ", *(p+j));
    }
    printf("\n");
}