#include<stdio.h>

int main()
{
    long int n,x=0,y=0,z=0,i,t;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d",&n);
        if(n==1)
            x++;
        else if(n==2)
            y++;
        else if(n==3)
            z++;
    }
    if(x>y&&x>z)
        printf("%d",y+z);
    else if(y>x&&y>z)
        printf("%d",x+z);
    else if(z>x&&z>y)
        printf("%d",x+y);
    else if(x==y&&x==z)
        printf("%d",y+z);
    else if(x==y&&x>z||x==z&&x>y)
        printf("%d",y+z);
    else if(z==y&&z>x||z==x&&z>y)
        printf("%d",y+x);
    else if(y==x&&y>z||y==z&&y>x)
        printf("%d",x+z);

}
