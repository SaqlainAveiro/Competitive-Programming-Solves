#include<stdio.h>

int main()
{
    int a[3],i,j,t,x=0,y=0,count=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[j]);
            if(a[j]==1)
                x++;
            else if(a[j]==0)
                y++;
        }
        if(x>y)
            {
                count++;
            }
        x=0;
        y=0;
    }
    printf("%d",count);
}
