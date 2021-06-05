#include<stdio.h>

int main()
{
    int w;
    scanf("%d",&w);
    if(w%2==0)
    {
        if(w/2!=1)
            printf("YES");
        else printf("NO");
    }
    else printf("NO");
}
