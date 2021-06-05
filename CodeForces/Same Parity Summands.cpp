#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,s,r,f,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n>>k;

        sum=total=p=q=0;

        if(n%k==0)
        {
            cout<<"YES\n";

            for(j=1 ; j<=k ; j++)   cout<<n/k<<" ";

            cout<<"\n";
        }
        else
        {
            sum=n/k;
            total=n%k;

            total+=sum;    k--;

            if(total>0 && sum>0 && (total%2!=0 && sum%2!=0 || total%2==0 && sum%2==0))
            {
                cout<<"YES\n";

                for(j=1 ; j<=k ; j++)   cout<<sum<<" ";

                cout<<total<<"\n";

            }
            else
            {
                if(k%2==0 && k>0)
                {
                    p=sum-1;    q=sum+1;

                    if(p<=0)
                    {
                        cout<<"NO\n";continue;
                    }

                    cout<<"YES\n";

                    for(j=1 ; j<=k/2 ; j++)     cout<<p<<" ";
                    for(j=1 ; j<=k/2 ; j++)     cout<<q<<" ";

                    cout<<total<<"\n";
                }
                else cout<<"NO\n";
            }
        }
    }
}
