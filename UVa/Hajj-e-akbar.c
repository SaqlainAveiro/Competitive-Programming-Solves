#include<stdio.h>

int main()
{
    char a[50];
    int i;
    for(i=1;i>0;i++)
    {
        gets(a);
        if(a[0]=='H')
            printf("Case %d: Hajj-e-Akbar\n",i);
        else if(a[0]=='U')
            printf("Case %d: Hajj-e-Asghar\n",i);
        else if(a[0]=='*')
            break;
    }
}
