#include<stdio.h>
#include<math.h>

int main()
{
    int n,i,j=1,sum,count,k,m;
    scanf("%d",&n);

    while(1)
    {
        for(i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
            {
                while(n%i==0)
                {
                    n=n/i;
                }
                j++;
            }
        }
    }
}
