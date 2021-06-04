#include<stdio.h>
int main()
{
    int i,n,time;
    for (i=0;(scanf("%d",&n))!=EOF;++i)
    {
        time=(n*2)+n;
        printf("Case %d: %d",++i,time);
    }
}
