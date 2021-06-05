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

    map<lli,string>mp;
    vector< pair<lli,string> >vp;
    string ar,br,cr;

    sf1(t);

    fr(i,t)
    {
        cin>>ar;

        res=ar.size();

        vp.push_back(make_pair(res,ar));
    }

    sort(vp.begin(),vp.end());

    //fr(i,t)     cout<<vp[i-1].second<<"\n";

    sum=0;

    t--;

    fr(i,t)
    {
        ar=vp[i-1].second;
        ans=vp[i-1].first;

        br=vp[i].second;
        res=vp[i].first;

        k=res-ans+1;

        //cout<<"Test : "<<ar<<"  and  "<<br<<"\n";

        fr(j,k)
        {
            if(br.substr(j-1,ans)==ar)
            {
                //cout<<"Found "<<br.substr(j-1,ans)<<"\n";
                sum++;  break;
            }
        }
    }

    if(sum==t)
    {
        cout<<"YES\n"; t++;

        fr(i,t)     cout<<vp[i-1].second<<"\n";
    }
    else    cout<<"NO\n";
}
