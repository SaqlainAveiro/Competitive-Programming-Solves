#include<stdio.h>

int main()
{
    int a1,a2,b1,b2,a3,b3,i,t,sum=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d ",&a1);
        scanf("%d ",&b1);
        scanf("%d ",&a2);
        scanf("%d ",&b2);
        scanf("%d ",&a3);
        scanf("%d ",&b3);
        a1=b1-a1+1;
        a2=b2-a2+1;
        a3=b3-a3+1;
        sum=a1+a2+a3;
        printf("%d\n",sum);
    }
}
