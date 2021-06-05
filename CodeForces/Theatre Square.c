#include<stdio.h>

int main()
{
    long long int a,b,c,j,z,m,n,i;

    scanf("%lld %lld %lld",&n,&m,&a);

   if(a<=m)
   {
        if(m%a==0)
            b=m/a;
        else b=1+m/a;
   }
   else
       b=1;

    if(a<=n)
    {
        if(n%a==0)
            c=n/a;
        else c=1+n/a;
    }
    else
        c=1;

   printf("%lld\n",b*c);
}
