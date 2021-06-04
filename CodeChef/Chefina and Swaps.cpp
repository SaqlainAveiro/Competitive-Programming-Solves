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

    sf1(t);

    fr(i,t)
    {
        vector< pair<lli,lli> >cr;
        set<lli>s1;
        set<lli>::iterator it1;
        map<lli,lli>mp1,mp2,mp3;

        sf1(n);

        fr(j,n)     sf1(x),     s1.insert(x),      mp1[x]++ ,mp3[x]=1;

        fr(j,n)     sf1(x),     s1.insert(x),      mp2[x]++ ,mp3[x]=1;

        if(n==1)
        {
            if(s1.size()>1)    pf("-1\n");

            else    pf("0\n");

            continue;
        }

        sum=a=b=0;

        for(it1=s1.begin() ; it1!=s1.end() ; it1++)
        {
            if(mp1[*it1]==0 && mp2[*it1]%2==0 && mp3[*it1]>0 && mp2[*it1]>0)
            {
                cr.push_back(make_pair(*it1 , mp2[*it1]/2));     mp3[*it1]=-1;

                //pf("%lld need to transfer %lld times\n",*it1,mp2[*it1]/2);
            }


            if(mp2[*it1]==0 && mp1[*it1]%2==0 && mp3[*it1]>0 && mp1[*it1]>0)
            {
                cr.push_back(make_pair(*it1,mp1[*it1]/2));      mp3[*it1]=-1;

                //pf("%lld need to transfer %lld times\n",*it1,mp1[*it1]/2);
            }


            if(mp1[*it1]>=0 && mp3[*it1]>0 && mp2[*it1]>=0)
            {
                if(mp1[*it1]!=mp2[*it1] && (mp1[*it1]+mp2[*it1])%2==0)
                {
                    b=(mp1[*it1]+mp2[*it1])/2;      b=abs(b-mp1[*it1]);     cr.push_back(make_pair(*it1 , b));

                    //pf("%lld need to transfer %lld times\n",*it1,b);
                }
                else if((mp1[*it1]+mp2[*it1])%2!=0)
                {
                    a=1;    break;     //pf("\n(%lld + %lld)%2!=0\n",mp1[*it1],mp2[*it1]);
                }
                mp3[*it1]=-1;
            }
        }

        if(a==1)    pf("-1\n");

        else
        {
            sort(cr.begin(),cr.end());

            k=cr.size()/2;

            fr(j,k)     sum+=(cr[j-1].first*cr[j-1].second);

            pf("%lld\n",sum);
        }
    }
}
