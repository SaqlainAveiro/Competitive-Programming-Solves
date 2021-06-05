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

    sf2(n,m);

    vector<string>ar,str;
    map<string,lli>mp;
    string br,cr,dr;

    fr1(j,n)    cin>>br,  ar.push_back(br),   mp[br]++;

    x=0;

    fr0(j,n)
    {
        br=ar[j];

        fr2(k,m)      cr+=br[k-1];

        if(mp[cr]>0)
        {
            if(br!=cr)    str.push_back(br);
            else
            {
                if(x==0)     dr+=br,    x=1;
            }
            mp[br]=mp[cr]=0;
        }
        cr.clear();    br.clear();
    }

    if(str.size()>0)
    {
        fr0(j,str.size())   cr+=str[j];   cr+=dr;

        fr0(k,str.size())   br+=str[k];

        for(lli k=br.size()-1 ; k>=0 ; k--)   cr+=br[k];
    }

    cout<<cr.size()<<"\n"<<cr<<"\n";
}
