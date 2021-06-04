#include<stdio.h>

int main()
{
    int t,i,j,k,x,y,z,count=0;
    scanf("%d",&t);
    int a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=1;j<t;j++)
        {
            for(k=0;k<t;k++)
            {
                if(a[i]==a[k]+a[j])
                 {
                    x=a[i];
                    y=a[k];
                    z=a[j];
                    break;

                 }
            }
        }
    }
    printf("%d %d %d",a[x],a[y],a[z]);
}
