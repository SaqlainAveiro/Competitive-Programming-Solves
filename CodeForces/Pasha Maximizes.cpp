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

    string ar;
    vector<lli>br;

    cin>>ar>>k;

    fr(i,ar.size()) br.push_back( ar[i-1]-48 );

    x=b=0;  n=ar.size()-1;

    while(k>0 && x<=n)
    {
        lli value=0,position=-1;

        d=min(k+b,n);

        fr1(i,b,d)
        {
            if(value<br[i])
            {
                value=br[i];    position=i+1;
            }
        }

        if(x+1<position && position>=1)
        {
            for(j=position-1 ; j>x ; j--)
            {
                swap(ar[j],ar[j-1]);
                swap(br[j],br[j-1]);
                k--;
            }
        }

        b++;    x++;
    }
    cout<<ar<<"\n";
}
