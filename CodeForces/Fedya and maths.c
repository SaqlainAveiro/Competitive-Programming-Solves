#include<stdio.h>
#include<math.h>

int main()
{
    long long int n,sum,a,b,c,d;
    scanf("%lld",&n);
    a=pow(2,n);
    d=pow(1,n);
    b=pow(3,n);
    c=pow(4,n);
    sum=d+a+b+c;
    sum=sum%5;
    printf("%d",sum);
}
