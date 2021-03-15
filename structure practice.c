#define _CRT_NO_SECURE_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define MAX_people 6
int num1, num2;
char people[MAX_people];

void printselect()
{
    printf("입력대기\n");
    printf("1. 관공서 도착\n");
    printf("2. 관공서 퇴장\n");
    printf("3. 서비스 종료\n");
    scanf("%d",&num1);
    if(num1 ==1)
    {
        printf("1. 대기자 등록\n");
        printf("2.   취소\n");
        scanf("%d",&num2);
        if(num2 == 1)
        {
            printf("이름 입력: ");
        }
    }
    else if(num1 == 3)
    {
        return 0;
    }
}

void makeindex()
{
    struct peoplepool *p[MAX_people];
    




}

void moveindex()
{



}




int main()
{
    printselect();
}




