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

    string ar;
    vector<lli>br;

    cin>>ar;

    t=ar.size()-1;

    sum=a=0;

    while(1)
    {
        a=0;

        for(i=0 ; i<t ; i++)
        {
            if(ar[i+1]==ar[i])
            {
                ar.erase(ar.begin()+i); ar.erase(ar.begin()+i);     a=1;
                t-=2;   sum++;
                if(i>1)     i-=2;
            }
        }
        if(a==0)    break;
    }
    if(sum%2!=0)    cout<<"Yes\n";
    else cout<<"No\n";
}
