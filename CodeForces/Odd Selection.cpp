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

int main()
{
    //FastIO;

    //read(in);

    sf1(t);

    fr(i,t)
    {
        vector<lli>ar;

        sf2(n,x);

        sum=res=ans=0;

        lli odd=0,even=0;

        fr(j,n)
        {
            sf1(a);

            if(a%2!=0)  odd++;

            else even++;
        }

        if(odd==0 || x%2==0 && even==0) pf("No\n");

        else
        {
            if(odd%2==0)    odd--;

            if(odd+even>=x)     pf("Yes\n");

            else pf("No\n");
        }
    }
}
