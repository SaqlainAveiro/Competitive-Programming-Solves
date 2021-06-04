#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(int i=0 ; i<n ; i++)
#define fr1(i,n) for(int i=1 ; i<=n ; i++)
#define fr2(i,n) for(int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(int i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

vector<lli>prime,factors;
lli visited[100001]={0};

void Sieve_of_Eratosthenes(lli n)
{
    for(lli i=3 ; i<=n ; i+=2)
    {
        if(visited[i]==0)
        {
            for(lli j=i*i ; j<=n ; j+=2*i)    visited[j]=1;
        }
    }

    prime.push_back(2);

    for(lli i=3 ; i<=n ; i+=2)
    {
        if(visited[i]==0)   prime.push_back(i);
    }
}


void Prime_Power_Factorization(lli n)
{
    lli sqrtn=sqrt(n);

    for(lli i=0 ; i<prime.size() && prime[i]<=sqrtn ; i++)
    {
        if(n%prime[i]==0)
        {
            d=1;
            while(n%prime[i]==0)
            {
                n/=prime[i];   d++;   factors.push_back(prime[i]);
            }
            sqrtn=sqrt(n);      res*=d;
        }
    }
    if(n!=1)   factors.push_back(n) , res*=2;
}


int main()
{
    //FastIO;

    //read(in);

    Sieve_of_Eratosthenes(47000);

    sf1(n);

    fr1(k,n)
    {
        sf2(x,y);   ans=sum=0;

        frx(j,x,y)
        {
            res=1;  Prime_Power_Factorization(j);    if(ans<res)     ans=res,    sum=j;
        }
        pf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",x,y,sum,ans);
    }
}
