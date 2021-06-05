#include<stdio.h>

int main()
{
    long int a,b,n,i;
    scanf("%ld %ld",&a,&b);
    for(i=1;i>0;i++)
    {
        if(a==0||b==0)
            break;
        if(a>=(2*b))
        {
            a=a-2*b;
        }
        if(b>=(2*a))
        {
            b=b-2*a;
        }
    }
    printf("%d %d",a,b);
}
