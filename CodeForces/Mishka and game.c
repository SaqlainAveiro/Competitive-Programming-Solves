#include<stdio.h>

int main()
{
    int m,c,i,t,x=0,y=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%d %d",&m,&c);
        if(m>c)
            x++;
        else if(c>m)
            y++;
    }
    if(x>y)
        printf("Mishka");
    else if(x<y)
        printf("Chris");
    else if(x==y)
        printf("Friendship is magic!^^");
}
