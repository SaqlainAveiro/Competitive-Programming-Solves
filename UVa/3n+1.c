#include<stdio.h>

int main()
{
    int n,m,count,i;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i>0;i++)
    {
        if(n==1)
            {
                break;
            }
        else if(n%2!=0)
        {
            n=3*n+1;
        }
        else if(n%2==0)
        {
            n=n/2;
        }
    }
    printf("%d",i);
}
