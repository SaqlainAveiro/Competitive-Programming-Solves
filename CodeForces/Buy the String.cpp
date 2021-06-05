#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
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

    cin>>t;

    fr1(i,t)
    {
        lli c0,c1;  string ar;  sum=res=p=q=0;

        cin>>n>>c0>>c1>>h>>ar;

        fr0(j,ar.size())
        {
            if(ar[j]=='0')      sum+=c0,p++;
            else    sum+=c1,q++;
        }

        res=sum;

        if(c0<=c1 && (sum+q*(h+c0-c1)<=sum) )    res=sum+q*(h+c0-c1);

        else if(c1<c0 && (sum+p*(h+c1-c0)<=sum) )   res=sum+p*(h+c1-c0);

        pf("%lld\n",res);
    }
}
