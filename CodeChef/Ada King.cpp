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
        sf1(n);

        char ar[8][8];

        fr(j,8)     fr(k,8)     ar[j-1][k-1]='.';

        ar[0][0]='O';

        n--;

        fr(j,8)
        {
            fr(k,8)
            {
                if(ar[j-1][k-1]!='O')
                {
                    if(n>0) n--;
                    else ar[j-1][k-1]='X';
                }
            }
        }

        fr(j,8)
        {
            fr(k,8)     pf("%c",ar[j-1][k-1]);  pf("\n");
        }
        pf("\n");
    }
}
