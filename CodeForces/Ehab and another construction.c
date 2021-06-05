#include<stdio.h>

int main()
{
    int x,i,j,count=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        for(j=2;j<=x;j++)
        {
            if(i*j>x&&(i/j)<x)
            {
                if(i%j==0)
                    count=1;
            }
        }
    }
    if(count==1)
        printf("%d %d",i,j);
}
