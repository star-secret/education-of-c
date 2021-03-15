#include <stdio.h>
int main(void)
{
    int money;
    int a,b,c,d;
    scanf("%d", &money);
    a = money/500;
    money = money - 500*a;
    b = money/100;
    money = money - 100*b;
    c = money/50;
    money = money -50*c;
    d = money/10;
    printf("500원 동전 : %d개\n",a);
    printf("100원 동전 : %d개\n",b);
    printf("50원 동전 : %d개\n",c);
    printf("10원 동전 : %d개\n",d);
	return 0;
}
