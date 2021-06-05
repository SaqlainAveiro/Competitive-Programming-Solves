#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0,res=0,ans=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n>>m;

        p=m%10; c=2;   sum=p;   a=b=ans=0;

        while(1)
        {
            if((c*p)%10==p)
            {
                c--;    break;
            }
            sum+=(c*p)%10;
            c++;
        }

        total=(n/m);    a=total/c;      b=total%c;

        ans=a*sum;

        for(j=1 ; j<=b ; j++)   ans+=(p*j)%10;

        cout<<ans<<"\n";
    }
}
