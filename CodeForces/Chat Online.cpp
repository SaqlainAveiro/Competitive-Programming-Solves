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

    cin>>p>>q>>l>>r;

    vector<pair<lli,lli> >mp1,mp2;

    total=x=0;

    fr(i,p)        cin>>a>>b,       mp1.push_back(make_pair(a,b));

    fr(i,q)        cin>>a>>b,       mp2.push_back(make_pair(a,b));

    p--,q--;

    fr1(i,l,r)
    {
        sum=0;

        fr1(j,x,q)
        {
            lli temp1= mp2[j].first + i , temp2= mp2[j].second + i ;

            fr1(k,x,p)
            {
                if(temp1 >= mp1[k].first && temp1 <= mp1[k].second  || temp2 >= mp1[k].first && temp2 <= mp1[k].second)
                {
                    sum=1;                    break;
                }
                if(temp1 <= mp1[k].first && temp2 >= mp1[k].first || mp1[k].second <= temp2 && temp1 <= mp1[k].second)
                {
                    sum=1;                    break;
                }
            }
            if(sum==1)  break;
        }
        if(sum==1)  total++;
    }
    cout<<total<<"\n";
}
