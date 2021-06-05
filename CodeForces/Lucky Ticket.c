#include<stdio.h>

int main()
{
    int t,i=0,sum,num=0,jum=0;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    i=0;
    while(i<t)
    {
        if(a[i]==4||a[i]==7)
        {
            sum++;
            i++;
        }
        else
        {
            sum--;
            i++;
        }
    }
    if(sum!=t)
    {
        printf("NO\n");
    }
    else
    {for(i=0;i<t/2;i++)
    {
        num=num+a[i];
    }
    for(i=t/2;i<t;i++)
    {
        jum=jum+a[i];
    }
    if(jum==num)
    {
        printf("YES\n");

    }
    else printf("NO\n");
    }
    printf("%d --- %d",jum,num);
}
