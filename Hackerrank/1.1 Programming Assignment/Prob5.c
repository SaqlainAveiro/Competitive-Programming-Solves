#include<stdio.h>
int main()
{
    int n,t,i,j;
    char x;
    scanf("%d",&t);
    for (i=1;i<=t;i++)
    {
        scanf("%d",&n);
        scanf("%c",&x);
        for(j=1;j<i;j++)
        {
            printf("");
        }
        if(n<=-70&&x)
              printf("Case %d: YES",j);
              else if(n>=70&&x)
                printf("Case %d: YES",j);
            else printf("Case %d: NO",j);

    }
}
