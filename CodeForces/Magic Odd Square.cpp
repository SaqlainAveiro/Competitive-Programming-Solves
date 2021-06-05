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

    lli ar[50][50];

    fr(i,50)    fr(j,50)    ar[i-1][j-1]=0;

    a=1;    b=t/2;      c=1;       d=0;

    for(i=0 ; i<t ; i++)
    {
        for(j=b ; j<=b+c-1 ; j++)
        {
            ar[i][j]=a; a+=2;
        }

        if(d==1)    b++,c-=2;

        else
        {
            b--;    c+=2;     if(b==0)    d=1;
        }
    }

    a=2;

    fr(i,t)
    {
        fr(j,t)   if(ar[i-1][j-1]==0)   ar[i-1][j-1]=a , a+=2;
    }

    fr(i,t)
    {
        fr(j,t)     pf("%lld ",ar[i-1][j-1]);   pf("\n");
    }
}
