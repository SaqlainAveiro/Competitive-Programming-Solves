#include<stdio.h>

int main()
{
    int b,c,d,i=1,j=1,k,n,t=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(i)
    {
        if(a[i+1]!=0&&a[i-1]!=0)
        {
            t++;
        }
        else if(i==n)
        {
            i=0;
            j=j+1;
        }

        else if(j>=2)
        {
            break;
        }

        else i++;
    }
    printf("%d\n",t);
}
