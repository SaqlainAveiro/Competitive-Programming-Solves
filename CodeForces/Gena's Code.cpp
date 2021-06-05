#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Output.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(long long int i=0 ; i<n ; i++)
#define fr1(i,n) for(long long int i=1 ; i<=n ; i++)
#define fr2(i,n) for(long long int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(long long int i=x ; i<=n ; i++)
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

    //read(in);    write(out);

    cin>>t;     string ar,br;

    fr1(i,t)    
    {
        cin>>ar;

        a=b=c=0;

        fr0(j,ar.size())
        {
            if(ar[j]=='1')  a++;
            else if(ar[j]=='0')     b++;
            else c++;
        }

        if(ar[0]=='0')  total=-1;  

        if((a>1 || c>0) && total!=-1)  br=ar , b=0;  sum+=b;
    }

    if(total!=-1)
    {
        if(br.size()==0)    cout<<1;
        else    cout<<br;
        
        fr1(i,sum)  cout<<0;    cout<<"\n";
    }
    else cout<<0<<"\n";    
}