#include<stdio.h>
#include<string.h>

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

    char ar[101];

    lli br[26]={0}; x=26;

    sf1(t); sf("%s",&ar);

    fr(i,t)
    {
        if(ar[i-1]<97)   br[ ar[i-1]+32-97 ]++;

        else  br[ ar[i-1]-97 ]++;
    }

    fr(i,x)     if(br[i-1]>0)   sum++;

    if(sum==26)     pf("YES\n");

    else    pf("NO\n");
}
