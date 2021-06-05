#include<stdio.h>

int main()
{
    int n,k,i,j,sum=0;
    scanf("%d",&n);

    for(i=2 ; i<=n-1 ; i++)
    {
        sum=sum+(n-i)*i;
    }

    printf("%d\n",sum+(2*n-1));
}
