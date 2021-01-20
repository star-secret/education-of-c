#include <stdio.h>
#include <string.h>

int main(void)
{   
    char str1[10];
    char str2[10];
    scanf("%s %s",str1,str2);
    printf("str1 : %s\n",str1);
    printf("str2 : %s\n",str2);
    printf("length of str1 : %ld\n",strlen(str1));
    printf("length of str2 : %ld\n",strlen(str2));
    printf("str1 + str2 : %s%s\n",str1,str2);
    if(strcmp(str1,str2) == 0)
    {
        printf("Same.\n");
    }
    else
    {
        printf("Not same.\n");
    }
    return 0;
}