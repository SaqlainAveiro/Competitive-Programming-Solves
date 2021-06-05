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

    string ar,br;

    map<char,lli>sp,mp;

    cin>>ar>>br;

    a=ar.size();    b=br.size();

    fr(i,a)     mp[ ar[i-1] ]++;

    fr(i,b)     sp[ br[i-1] ]++;

    c=d=0;

    fr(i,a)  if(sp[ ar[i-1] ]>0)  sp[ ar[i-1] ]--,  c++ , mp[ ar[i-1] ]-- ,ar[i-1]='.';

    fr(i,a)
    {
        if(mp[ ar[i-1] ]>0 && ar[i-1]!='.')
        {
            if(sp[ ar[i-1] ]==0)
            {
                if(sp[ ar[i-1]-32 ]>0)      sp[ ar[i-1]-32 ]-- , d++,    ar[i-1]='.' ,    mp[ar[i-1]]--;

                else if(sp[ ar[i-1]+32 ]>0)     sp[ ar[i-1]+32 ]-- ,d++,    ar[i-1]='.' ,    mp[ar[i-1]]--;
            }
        }
    }
    //cout<<"\n\n";
    cout<<c<<" "<<d<<"\n";
}
