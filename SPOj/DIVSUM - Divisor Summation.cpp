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
lli N=200000000 , Status[(200000000/32)+2];

bool Check(lli N, lli pos)   {  return (bool)( N & (1<<pos) ); }
lli Set(lli N, lli pos)   {  return N = N | (1<<pos); }


void Bitwise_Sieve()
{
    lli sqrtN = sqrt(N);

    for(i=3 ; i<=sqrtN ; i+=2)
    {
        if(Check(Status[ i>>5 ] , i&31)==0)
        {
            for(j=i*i ; j<=N ; j+=(i<<1))
            {
                Status[ j>>5 ] = Set(Status[ j>>5 ] , j&31);
            }
        }
    }
    prime.push_back(2);

    for(i=3 ; i<=N ; i+=2)
    {
        if(Check(Status[ i>>5 ] , i&31)==0)     prime.push_back(i);
    }
}


void Prime_Power_Factorization(lli n)
{
    lli sqrtn=sqrt(n);  res=sum=1;

    for(lli i=0 ; i<prime.size() && prime[i]<=sqrtn ; i++)
    {
        if(n%prime[i]==0)
        {
            p=1;
            while(n%prime[i]==0)
            {
                n/=prime[i];
                p=p*prime[i];
            }
            sqrtn=sqrt(n);              p=p*prime[i];             sum=sum*( (p-1)/(prime[i]-1) );
        }
    }
    if(n!=1)    sum=sum*(n+1);
}

int main()
{
    //FastIO;

    //read(in);

    Bitwise_Sieve();

    sf1(t);

    fr1(i,t)
    {
        sf1(x);

        Prime_Power_Factorization(x);

        pf("%lld\n",sum-x);
    }
}
