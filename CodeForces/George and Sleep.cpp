#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
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

    //read(in);

    string ar,br,time1;

    cin>>ar>>br;

    a=(ar[0]-48)*10 + (ar[1]-48);    b=(ar[3]-48)*10 + (ar[4]-48);
    c=(br[0]-48)*10 + (br[1]-48);    d=(br[3]-48)*10 + (br[4]-48);

    sum=b-d;    res=a-c;

    if(res<0)   res+=24;

    if(sum<0)
    {
        sum+=60;

        if(res>=1)     res--;

        else    res=23;
    }

    time1+=(48+res/10);    time1+=(48+res%10);    time1+=':';    time1+=(48+sum/10);    time1+=(48+sum%10);

    cout<<time1<<"\n";
}
