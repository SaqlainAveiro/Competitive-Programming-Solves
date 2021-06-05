#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0;

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

        sum=total=p=q=0;

        for(j=1 ; j<=n ; j++)   cin>>x, ar.push_back(x),    sum+=x;

        for(j=1 ; j<=n ; j++)   cin>>x, br.push_back(x),    total+=x;


        sort(ar.begin(),ar.end());
        sort(br.begin(),br.end());

        f=n-1;

        for(j=0 ; j<n && k>0; j++)
        {
            if(br[f]>ar[j])
            {
                sum-=ar[j];
                sum+=br[f];
                f--;    k--;
            }
        }
        cout<<sum<<"\n";
    }
}
