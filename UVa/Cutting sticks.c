#include<stdio.h>

int main()
{
    int i,j,l,n,sum;
    while(1)
    {
        scanf("%d",&l);
        if(l>0)
        {
            scanf("%d",&n);
            int a[n];
            for(i=0;i<n;i++)
            {
                scanf("%d",&a[i]);
            }
            for(i=0;i<n-1;i++)
            {
                sum=(l-a[i]);
                l=l-a[i];

            }
        }
        else break;
    }
}
