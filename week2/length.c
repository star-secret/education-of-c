#include <stdio.h>
int main(void)
{
    char str[100];
    scanf("%s",str);
    int len;
    for (int i=0; str[i] != '\0'; i++)
    {
        len = len + 1;
    }
    printf("%d\n",len);
	return 0;
}