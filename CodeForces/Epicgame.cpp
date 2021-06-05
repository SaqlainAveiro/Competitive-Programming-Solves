#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b )
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int lcm(int a, int b)
{
    return ((a)/gcd(a,b))*b;
}

int main()
{
    int a,b,c,d,n,t,i=0,j,k,sim=0,antisim=0;
    scanf("%d %d %d",&a,&b,&n);

    while(i>=0)
    {
        sim=gcd(a,n);
        n=n-sim;

        if(n==0)
        {
            sim=0;
            break;
        }

        antisim=gcd(b,n);
        n=n-antisim;

        if(n==0)
        {
            sim=1;
            break;
        }

        i++;

    }

    if(sim==0)
    {
        printf("0\n");
    }
    else printf("1\n");



}
