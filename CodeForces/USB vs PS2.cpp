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

int main()
{
    //FastIO;

    //read(in);

    string ar;
    vector<lli>s1,s2,s3;

    cin>>u>>p>>b>>t;

    fr1(i,t)
    {
        cin>>x>>ar;

        if(ar=="USB")   s1.push_back(x);

        else    s2.push_back(x);
    }

    sort(s1.begin(),s1.end());    sort(s2.begin(),s2.end());         j=x=y=0;

    while(u && j<s1.size())       sum+=s1[j],    u--,    j++,    res++;   x=j;    j=0;

    while(p && j<s2.size())       sum+=s2[j],    p--,    j++,    res++;   y=j;    j=0;

    while(x<s1.size())       s3.push_back(s1[x]),  x++;

    while(y<s2.size())       s3.push_back(s2[y]),  y++;

    sort(s3.begin(),s3.end());

    while(b && j<s3.size())     sum+=s3[j],     b--,    j++,    res++;

    cout<<res<<" "<<sum<<"\n";
}
