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

        vector<lli>ar,br;

        sum=0;

        for(j=1 ; j<=n ; j++)
        {
            cin>>x;     ar.push_back(x);    if(x%2!=0)  sum++;
        }

        if(sum<k)   cout<<"NO\n";

        else
        {
            sum=0;

            for(j=0 ; j<n ; j++)
            {
                if(ar[j]%2!=0)  sum++,br.push_back(j+1);

                if(sum==k)  break;
            }

            if(sum==k)
            {
                m=j;    a=1;

                for(j=m+1 ; j<n ; j++)
                {
                    if(ar[j]%2!=0)  a++;
                }

                if(a%2!=0)
                {
                    cout<<"YES\n";

                    if(a>0)     f=br.size()-1;
                    else    f=br.size();

                    for(j=0 ; j<f ; j++)  cout<<br[j]<<" ";

                    if(a>0)     cout<<n<<"\n";
                    else cout<<"\n";

                }
                else   cout<<"NO\n";
            }
            else    cout<<"NO\n";
        }
    }
}
