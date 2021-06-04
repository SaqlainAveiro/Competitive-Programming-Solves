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
        cin>>n;
        vector<lli>ar,br;

        sum=1;

        for(j=1 ; j<=n ; j++)
        {
            cin>>x; ar.push_back(x);
        }
        for(j=0 ; j<n-1 ; j++)
        {
            if(ar[j]+2>=ar[j+1])
            {
                sum++;
            }
            else
            {
                br.push_back(sum);  sum=1;
            }
        }
        br.push_back(sum);

        sort(br.begin() , br.end());

        k=br.size()-1;
        /*cout<<"\n";
        cout<<"Case "<<i<<" : ";
        for(j=0 ; j<=k ; j++)   cout<<br[j]<<" ";
        cout<<"\n\n";*/

        cout<<br[0]<<" "<<br[k]<<"\n";
    }
}
