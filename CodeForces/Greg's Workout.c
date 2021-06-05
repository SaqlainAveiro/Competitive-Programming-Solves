#include<stdio.h>

int main()
{
    int i,n,z=0,y=0,x=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;)
    {
        x=x+a[i];
        i=i+3;
        if(i>n)
            break;
    }
    for(i=1;i<n;)
    {
        y=y+a[i];
        i=i+3;
        if(i>n)
            break;
    }
    for(i=2;i<n;)
    {
        z=z+a[i];
        i=i+3;
        if(i>n)
            break;
    }
    if(x>y&&x>z)
    {
        printf("chest\n");
    }
    else if(y>x&&y>z)
    {
        printf("biceps\n");
    }
    else if(z>y&&z>x)
    {
        printf("back\n");
    }
}
