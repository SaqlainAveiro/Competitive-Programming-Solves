#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Output.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(long long int i=0 ; i<n ; i++)
#define fr1(i,n) for(long long int i=1 ; i<=n ; i++)
#define fr2(i,n) for(long long int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(long long int i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

int main()
{
    //FastIO;

    //read(in);

    string ar;

    cin>>ar;

    x=ar.size();

    if(x<=19 || x<=20 && ar[0]=='-')
    {
        n=0;   f=0;

        if(ar[0]=='-')       f=1;

        for(i=f ; i<x ; i++)
        {
            if(n*10 == 9223372036854775800 && (ar[i]-'0')>7)
            {
                cout<<"BigInteger\n";   return 0;
            }

            n=n*10+(ar[i]-'0');
        }

        if(f==1)    n=n*(-1);

        if(n>=-128 && n<=127)   cout<<"byte\n";

        else if(n>=-32768 && n<=32767)   cout<<"short\n";

        else if(n>=-2147483648  && n<=2147483647)   cout<<"int\n";

        else if(n>=-9223372036854775808  && n<=9223372036854775807)   cout<<"long\n";
    }
    else cout<<"BigInteger\n";
}
