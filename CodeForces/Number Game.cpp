#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr(i,n) for(i=1 ; i<=n ; i++)
#define fr1(i,x,n) for(i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

bool prime_check(lli number)
{
    if(number%2==0)     return false;
    for(k=3 ; k*k<=number ; k+=2)   if(number%k==0)     return false;
    return true;
}

int main()
{
    //FastIO;

    //read(in);

    sf1(t);

    fr(i,t)
    {
        sf1(x);

        c=x;

        while(c%2==0)   c=c/2;

        if(x==1 || c==1 && x!=2)    pf("FastestFinger\n");

        else if(x==2 || x%2!=0)     pf("Ashishgup\n");

        else if(prime_check(x/2))    pf("FastestFinger\n");

        else    pf("Ashishgup\n");
    }
}
