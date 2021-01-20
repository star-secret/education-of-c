#include <stdio.h>
int main(void)
{
    int i;
    scanf("%d",&i);
    int *pi = &i;
    printf("%d\n", *pi);
    *pi = (*pi)*(*pi);    
    printf("%d\n", *pi);
    return 0;
}