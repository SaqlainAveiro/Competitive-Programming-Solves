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

    read(in);    write(out);

    string ar;
    vector<string>v;

    cin>>n>>a>>b>>ar;

    x=min(a,b);     y=max(a,b);

    if(n%x==0)
    {
        cout<<n/x<<"\n";    p=x;
        fr0(i,n)
        {
            cout<<ar[i];    p--;    if(p==0)    cout<<"\n",p=x;
        }
    }
    else if(n%y==0)
    {
        cout<<n/y<<"\n";    p=y;
        fr0(i,n)
        {
            cout<<ar[i];    p--;    if(p==0)    cout<<"\n",p=y;
        }
    }
    else if(n%y==x)
    {
        cout<<1+n/y<<"\n";    p=n/y;    q=0;    m=0;

        fr0(i,n)
        {
            cout<<ar[i];    q++;    
            
            if(q==y && m!=p)    cout<<"\n",q=0,m++;

            if(m==p && q==x)    cout<<"\n";
        }
    }
    else if(n%y!=x)
    {
        p=q=0;

        fr1(i,50)
        {
            if( (n-x*i)%y==0 && (n-x*i)>0)
            {
                p=i;    q=(n-x*i)/y;
                break;
            }
        }

        if(p==0 && q==0)
        {
            cout<<"-1\n";   return 0;
        }

        cout<<p+q<<"\n";    a=x,b=y;
         
        fr0(i,n)
        {
            cout<<ar[i];    a--;  

            if(p==0)   
            {
                b--;    if(b==0 && q>0)     cout<<"\n",b=y,q--;
            }   
            
            if(a==0 && p>0)    cout<<"\n",a=x,p--;
        }
    }
    else cout<<"-1\n";
}