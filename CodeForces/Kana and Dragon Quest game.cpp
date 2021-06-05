#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    while(t--)
    {
        cin>>x>>n>>m;
        p=10*m;
        q=0;
        d=0;
        while(1)
        {
            if(x-p<=0)
            {
                q=1;
                break;
            }
            if(d<n)
            {
                x=(x/2)+10;
                d++;
            }
            else if(d==n)
            {
                if(x-p>0)
                {
                    q=0;break;
                }
            }
            //cout<<x<<"\n";
        }
        if(q==1)
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }
}
