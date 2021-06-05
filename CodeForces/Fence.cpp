#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>n>>k;

    vector<lli>ar,br;
    vector<lli>::iterator it;

    for(j=0 ; j<n ; j++)
    {
        cin>>x;
        ar.push_back(x);
    }

    sum=d=y=0;

    for(i=0 ; i<n ; i++)
    {
        sum += ar[i];

        if(y<k)
        {
            y++;
        }

        if(y==k)
        {
            br.push_back(sum);
            sum -= ar[d];
            d++;
            y--;
        }
    }

    total=br[0];
    d=1;

    for(i=1 ; i<br.size() ; i++)
    {
        if(total>br[i])
        {
            total=br[i];
            d=i+1;
        }
    }

    cout<<d<<"\n";
}
