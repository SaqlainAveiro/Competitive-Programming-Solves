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

    cin>>t;

    fr(i,t)
    {
        cin>>n;

        char ch='0',ch1;
        string br;
        vector<string>ar;
        map<string,lli>mp;

        fr(j,n)    cin>>br , ar.push_back(br) , mp[br]++;

        p=x=0;

        fr(j,n)
        {
            if(mp[ ar[j-1] ]>1)
            {
                br=ar[j-1],p++;

                while(1)
                {
                    ch1=br[x];    br[x]=ch;

                    if(mp[br]==0)    break;

                    else ch++,br[x]=ch1;

                    if(ch=='9')  ch='0',x++;

                    if(x==3)    x=0;
                }
                mp[ ar[j-1] ]--,  mp[br]++,  ar[j-1]=br;
            }
        }
        cout<<p<<"\n";
        fr(j,n)   cout<<ar[j-1]<<"\n";
    }
}
