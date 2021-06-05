#include<stdio.h>

int main()
{
    int m,n,i,j,k,l,min,max,sum=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(1)
    {
        l=0;
        for(i=0;i<n-1;i++)
        {
            if(a[i]<a[i+1])
            {
                min=a[i+1];
                a[i+1]=a[i];
                a[i]=min;
                l=1;
            }
        }
        if(l==0)
            break;
    }

    scanf("%d",&m);
    int b[m];
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }

    while(1)
    {
        k=0;
        for(i=0;i<m-1;i++)
        {
            if(b[i]<b[i+1])
            {
                max=b[i+1];
                b[i+1]=b[i];
                b[i]=max;
                k=1;
            }
        }
        if(k==0)
            break;
    }

    /*printf("\nBoys - \n\n");
    for(i=0;i<n;i++)
    {
        printf("%d, ",a[i]);
    }
    printf("\n\n");

    printf("\nGirls - \n\n");
    for(i=0;i<m;i++)
    {
        printf("%d, ",b[i]);
    }*/
    l=0;
    if(n>=m)
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                if(b[i]>a[j])
                {
                    k=b[i]-a[j];
                    if(k<=1)
                        l++;
                        break;
                }
                else
                {
                    k=a[j]-b[i];
                    if(k<=1)
                        l++;
                        break;
                }
            }
        }
    }
    else if(m>n)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                if(a[i]>b[j])
                {
                    k=a[i]-b[j];
                    if(k<=1)
                        l++;
                        break;
                }
                else
                {
                    k=b[j]-a[i];
                    if(k<=1)
                        l++;
                        break;
                }
            }
        }
    }
    printf("%d",l);
}
