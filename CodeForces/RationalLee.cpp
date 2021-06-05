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

    set<lli>st;
    set<lli>::iterator it;
    map<lli,lli>mp;
    vector<lli>ar,br;

    sf1(t);

    fr(i,t)
    {
        st.clear();     mp.clear();     ar.clear();     br.clear();

        sf2(n,k);

        fr(j,n)  sf1(x) , st.insert(x) , mp[x]++;

        fr(j,k) sf1(x) , br.push_back(x);        sort(br.begin(),br.end());

        for(it=st.begin() ; it!=st.end() ; it++)    ar.push_back(*it);

        res=total=0;

        fr(j,br.size())
        {
            x=br[j-1], sum=p=q=0, b=INT_MIN , a=INF, f=ar.size();

            fr(k,f)
            {
                c=ar[f-k];

                if(mp[c]>0 && x>0)
                {
                    //sum+=min(x,mp[c]) , q=x , x-=min(x,mp[c]) , mp[c]-=min(q,mp[c]);

                    sum+=

                    a=min(c,a) , b=max(b,c);

                    if(mp[c]==0)    p++;
                }
                else if(x==0)   break;
            }

            total+=(a+b);   pf("For %lld : %lld\n",br[j-1],a+b);
        }

        pf("%lld\n",total);
    }
}
