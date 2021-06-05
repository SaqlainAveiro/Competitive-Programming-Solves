#include<stdio.h>

int main()
{
    int n,m,k,i,j,p,count,mount,x=0,y=0;
    scanf("%d %d %d",&n,&m,&k);
    int a[n];

    a[0]=10;

    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }


   /* if(m==1)
    {
       for(j=m;j<=n;j++)
       {
            if(a[j]<=k&&a[j]!=0)
                break;
       }
       count=j-m;
       printf("%d",count*10);
    }


    else if(m==n)
    {
        for(p=m;p>0;p--)
        {
            if(a[p]<=k&&a[p]!=0)
                break;
        }
        mount=m-p;
        printf("%d",mount*10);
    }
*/

    //else if(m>1&&m<n)
    {
        for(j=m;j<=n;j++)
        {
            if(a[j]<=k&&a[j]!=0)
            {
                y=1;
                break;
            }
        }


        if(y==1)
        {
            mount=j-m;
        }

        for(p=m;p>=1;p--)
        {
            if(a[p]<=k&&a[p]!=0)
            {
                x=1;
                break;
            }
        }


        if(x==1)
        {
            count=m-p;
        }

        if(count>=mount)
        {
            printf("%d",mount*10);
        }
        else
        {
            printf("%d",count*10);
        }
    }
}
