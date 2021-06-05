#include<stdio.h>

int main()
{
    int i,t,n[100],cse=0;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&n[i]);
    }
    for(i=0;i<t;i++)
    {
        if(n[i]==1)
        {
            cse=1;
            break;
        }
    }
    if(cse==1)
    {
        printf("HARD");
    }
    else printf("EASY");
}
