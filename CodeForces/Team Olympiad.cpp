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

    a=b=c=sum=0;

    vector<lli>ar;


    fr(i,t)
    {
        sf1(x);     ar.push_back(x);

        if(x==1)    a++;
        if(x==2)    b++;
        if(x==3)    c++;

        sum+=x;
    }
    if(a>=1 && b>=1 && c>=1)
    {
        x=min(a,b);     x=min(c,x);

        cout<<x<<"\n";

        fr(j,x)
        {
            c=1; d=2 ; e=3;
            fr(i,t)
            {
                if(ar[i-1]!=-1)
                {
                    if(c==ar[i-1])
                    {
                        cout<<i<<" ";
                        ar[i-1]=-1;
                        c=-2;
                    }
                    if(d==ar[i-1])
                    {
                        cout<<i<<" ";
                        ar[i-1]=-1;
                        d=-3;
                    }
                    if(e==ar[i-1])
                    {
                        cout<<i<<" ";
                        ar[i-1]=-1;
                        e=-4;
                    }
                }
                if(c<0 && d<0 && e<0)   break;
            }
            cout<<"\n";
        }
    }
    else cout<<"0\n";
}
