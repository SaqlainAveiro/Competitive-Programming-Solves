#include<stdio.h>

int main()
{
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    if(a>b&&c>b)
    {
        if(a>c)
          printf("%d",(a-c)+(c-b));
        else printf("%d",(c-a)+(a-b));
    }
    else if(a>c&&b>c)
    {
        if(a>b)
            printf("%d",(a-b)+(b-c));
        else if(b>a) printf("%d",(b-a)+(a-c));

    }
    else if(c>a&&b>a)
    {
        if(c>b)
            printf("%d",(c-b)+(b-a));
        else printf("%d",(b-c)+(c-a));
    }
}
