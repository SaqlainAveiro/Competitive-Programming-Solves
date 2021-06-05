#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        if((n/2)%2!=0)  cout<<"NO\n";
        else
        {
            cout<<"YES\n";
            p=10;
            for(j=1 ; j<=n/2 ; j++)
            {
                cout<<p<<" ";
                p+=10;
            }
            p=10;
            for(j=1 ; j<=n/2 ; j++)
            {
                if(j%2!=0)  cout<<p+1<<" ";
                else    cout<<p-1<<" ";
                p+=10;
            }
            cout<<"\n";
        }
    }
}
