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

        string ar;

        cin>>ar;

        p=0,x=q=-1,y=9999999,f=ar.size();

        fr(j,f)
        {
            if(ar[f-j]=='0')
            {
                p=f-j; break;
            }
        }

        fr(j,p)
        {
            if(ar[p-j]=='0')
            {
                if(q==-1)      q=p-j ,x=max(x,p-j);
            }
            else if(ar[p-j]=='1')
            {
                if(q>=0)    q=-1;

                x=max(x,p-j);    y=min(y,p-j);
            }
        }

        if(y!=9999999)
        {
            fr(j,n)     if(j-1>=y && j-1<=x)    ar[j-1]='X';
        }

        fr(j,n)     if(ar[j-1]!='X')    cout<<ar[j-1];

        cout<<"\n";
    }
}
