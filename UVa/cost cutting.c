#include<stdio.h>

int main()
{
    int a,b,c,t,i;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d %d",&a,&b,&c);
        if(a>b&&b>c)//10 5 3
            printf("Case %d: %d\n",i,b);
        else if(b>c&&c>a)//3 5 4
            printf("Case %d: %d\n",i,c);
        else if(c>a&&a>b)//10 5 11
            printf("Case %d: %d\n",i,a);
        else if(a>c&&a<b)//5 10 3
            printf("Case %d: %d\n",i,a);
        else if(b>a&&b<c)//7 10 45
            printf("Case %d: %d\n",i,b);
        else if(c<a&&c>b)//21 19 20
            printf("Case %d: %d\n",i,c);

    }
}
