#include<stdio.h>

int main()
{
    int w,x,y,z,a[4],i,j;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<4-1;i++)
    {
        for(j=0;j<4-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                w=a[j];
                a[j]=a[j+1];
                a[j+1]=w;
            }
        }
    }
    printf("\n\n\n\n%d %d %d\n",a[3]-a[2],a[3]-a[1],a[3]-a[0]);
}
