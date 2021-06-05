#include<stdio.h>

int main()
{
    int n,p,q,i,j,sum=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d %d",&p,&q);
        if(p<=q-2)
        {
            sum++;
        }
    }
    printf("%d\n",sum);
}
