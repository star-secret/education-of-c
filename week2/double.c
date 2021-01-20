#include <stdio.h>
#include <stdlib.h>

int main(void)
{   
    double str[5];
    double *p = str;
    double sum;
    for (int k =0;k<5;k++)
    {
        scanf("%lf", &str[k]);
    }
    for (int j =0;j<5;j++)
    {
        printf("%f ", *(p+j)*2);
        sum = sum + *(p+j)*2;
    }
    printf("\n");
    printf("%f\n",sum);
}