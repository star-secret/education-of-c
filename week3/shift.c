#include <stdio.h>
#include <string.h>

int main(void)
{   
    char str[10];
    scanf("%s",str);
    int n;
    n = strlen(str);
    if(96<str[0])
    {
        str[0] = str[0]-32;
    }
    for(int i=1;i<n;i++)
    {   
        if(96>=str[i])
        {
            str[i] = str[i]+32;
        }
    }
    printf("%s\n",str);
    
    char str3[n];
    for(int i=0;i<n;i++)
    {
        if(96>=str[i])
        {
            str3[i] = str[i]+32;
        }
        else
        {
        str3[i]=str[i];
        }
    }
    
    char str1[(n/2)];
    char str2[(n/2)];
    for(int i=0;i<(n/2);i++)
    {   
        str1[i] = str3[i];
    }
    for(int i=0;i<(n/2);i++)
    {
        str2[i] = str3[n-i-1];
    }
    if(strcmp(str1,str2) == 0)
    {
        printf("Palindrome.\n");
    }
    else
    {
        printf("Not palindrome.\n");
    }
    return 0;
}