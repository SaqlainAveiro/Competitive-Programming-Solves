#include<stdio.h>

int main()
{
    int i,n,t,k;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        int sum=0,j,k=0;
        scanf("%d",&n);
        for(j=7,k=1;j>=2;)
        {
            sum=sum+j;
            if(sum==n)
                break;
            else if(sum>n)
            {
                sum=sum-j;
                j--;
            }
            else if(sum<n)
            {
                k++;
            }


        }
        printf("%d\n",k);
    }
}
