#include<stdio.h>

int main()
{
    long int n,s,i=1,sum=0;
    scanf("%ld %ld",&n,&s);
    for(i=1;i>0;i++)
    {
        sum=sum+n;
        if(sum==s)
        {
            break;
        }
        else if(sum>s)
        {
            i=i-1;
            sum=sum-n;
            n--;
        }
    }
    printf("%d",i);

}
