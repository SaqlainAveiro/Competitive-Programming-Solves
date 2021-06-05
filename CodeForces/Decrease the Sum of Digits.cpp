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

    sf1(t);

    fr1(i,t)
    {
        sf2(n,s);       m=n;        sum=ans=0;

        vector<lli>ar;

        while(m>0)      ar.push_back(m%10),   sum+=m%10,    m/=10;

        if(sum>s)
        {
            sum=0;

            for(lli j=ar.size()-1 ; j>=0 ; j--)
            {
                sum+=ar[j];

                if(sum>=s)
                {
                    if(j==ar.size()-1)    sum=-1 , ar[j]=0;

                    else    ar[j+1]++ , sum=j;

                    break;
                }
            }
            for(lli k=sum ; k>=0 ; k--)   ar[k]=0;

            if(sum==-1)
            {
                ar.push_back(1);

                for(lli k=ar.size()-2 ; k>=0 ; k--)     ar[k]=0;
            }

            //for(lli k=ar.size()-1 ; k>=0 ; k--)  cout<<ar[k];       cout<<"\n\n";

            x=sum=0;

            for(lli k=0 ; k<ar.size() ; k++,x++)
            {
                sum+=(ar[k]*pow(10,x)+0.5);
            }

            ans=sum-n;
        }

        else     ans=0;

        pf("%lld\n",ans);
    }
}
