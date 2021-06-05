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
        string ar,br,cr;
        map<char,lli>mp,sp;
        vector<char>vr;

        cin>>ar>>br>>cr;

        if(ar==br)  cout<<"Yes\n";

        else
        {
            a=ar.size() , b=br.size() , c=cr.size();

            fr(j,c)     mp[ cr[j-1] ]++;

            sum=k=p=0;

            fr(j,b)
            {
                if(br[j-1]==ar[k] && k<a)  k++;
                else vr.push_back(br[j-1]) , sp[ br[j-1] ]++;
            }

            if(k==a)
            {
                fr(j,vr.size())
                {
                    if( mp[ vr[j-1] ]==0 || mp[ vr[j-1] ]<sp[ vr[j-1] ])
                    {
                        p=1;    break;
                    }
                }
                if(p==1)    cout<<"No\n";
                else cout<<"Yes\n";
            }
            else cout<<"No\n";
        }
    }
}
