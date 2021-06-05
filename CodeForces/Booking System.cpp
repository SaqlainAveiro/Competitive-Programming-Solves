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

    vector< pair<lli,lli> >ar,br,cr;
    map<lli, map<lli,lli> >mp,sp;

    sf1(t);

    fr(i,t)     sf2(x,y),  ar.push_back(make_pair(y,x)),  mp[x][y]=i;  //can't use map[][] ;

    sort(ar.begin(),ar.end());      reverse(ar.begin(),ar.end());

    sf1(k);

    fr(i,k)     sf1(x),  br.push_back(make_pair(x,i)) , sp[x][i]=1;

    sort(br.begin(),br.end());

    total=res=sum=ans=0;

    fr(i,t)
    {
        a=ar[i-1].second;   b=ar[i-1].first;

        fr(j,k)
        {
            p=br[j-1].first;    q=br[j-1].second;

            if(a<=p && sp[p][q]==1)
            {
                cr.push_back(make_pair( mp[a][b] , q ));

                total+=b;   res++;

                sp[p][q]=0;

                break;
            }
        }
    }
    //pf("Total Accepted : %lld  and Total Money : %lld\n",res,total);
    pf("%lld %lld\n",res,total);

    fr(i,cr.size())
    {
        //pf("%lld  and %lld \n",cr[i-1].first,cr[i-1].second);
        pf("%lld %lld \n",cr[i-1].first,cr[i-1].second);
    }
}
