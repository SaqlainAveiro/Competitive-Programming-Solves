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

    string ar,br,str;       cin>>ar>>br;

    vector<lli>cr;     fr0(i,ar.size())     cr.push_back(ar[i]-'0');

    sort(cr.begin(),cr.end());

    y=ar.size();    x=br.size();  z=x-y;   p=0;

    fr0(i,z+1)    sum=(br[i]-'0')+sum*10, p++;

    fr0(j,y)
    {
        fr2(i,y)
        {
            if(cr[i-1]+res*10<=sum && cr[i-1]!=INF)
            {
                //cout<<j+1<<". "<<res<<" is less than "<<sum<<" , ";

                str+=cr[i-1]+'0';     res=cr[i-1]+res*10;    cr[i-1]=INF;

                //cout<<"new res = "<<res<<" and ";

                sum=(br[p+j]-'0')+sum*10;

                //cout<<"new sum = "<<sum<<"\n";

                break;
            }
        }
    }
    cout<<str<<"\n";
}
