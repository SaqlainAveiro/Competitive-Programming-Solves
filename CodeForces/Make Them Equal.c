#include<stdio.h>

int main()
{
    int n,x,y,z=0,i,j,k=0,f;
    scanf("%d",&n);
    int a[n],b[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        b[i]=0;
    }

    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                x=a[j];
                a[j]=a[j+1];
                a[j+1]=x;
            }
        }
    }
    /*printf("Sorted Inputs - \n");
    for(i=0;i<n;i++)
    {

        printf("%d ",a[i]);
    }*/
    for(i=n-1;i>0;i--)
    {
        if((a[i]-a[i-1])!=0)
        {
            b[i]=a[i]-a[i-1];
            k=k+b[i];
            z++;
        }
    }
    for(i=0;i<n-1;i++)
    {
       for(j=0;j<n-i-1;j++)
        {
            if(b[j]>b[j+1])
            {
                x=b[j];
                b[j]=b[j+1];
                b[j+1]=x;
            }
        }
    }
   /* printf("\nSorted Reminders - \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }*/

    for(i=n;i>0;i--)
    {

    }

    if(f==100)
        printf("%d\n",k/z);
    else printf("-1\n");
}
