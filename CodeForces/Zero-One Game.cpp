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
        string ar;

        cin>>ar;

        sum=a=k=0,b=ar.size();

        fr(k,b)
        {
            f=ar.size()-1,a=0;

            if(f==0)    break;

            fr(j,f)
            {
                if(ar[j-1]!=ar[j])
                {
                    sum++;  a=1;
                    if(ar.size()==2)
                    {
                        a=0;    break;
                    }
                    ar.erase(j-1,2);
                    break;
                }
            }
            if(a==0)    break;
        }
        if(sum%2!=0)    cout<<"DA\n";
        else    cout<<"NET\n";
    }
}
