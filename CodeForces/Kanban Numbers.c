#include<stdio.h>

int main()
{
    int a,x,d,i,j;

    scanf("%d",&x);

    if(x==1 || x>=62 && x<=99 || x>=6 && x<=24)
    {
        printf("NO\n");
    }
    else if(x>=2 && x<=5|| x>=25 && x<=61)
    {
        printf("YES\n");
    }
}
