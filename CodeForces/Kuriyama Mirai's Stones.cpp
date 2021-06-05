#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    vector<lli>ar,br;

    lli cr[t+1]={0},dr[t+1]={0};

    for(i=1 ; i<=t ; i++)
    {
        cin>>x;

        ar.push_back(x);

        br.push_back(x);
    }

    sort(br.begin(),br.end());

    cr[1]=ar[0];

    dr[1]=br[0];

    for(i=1 ; i<t ; i++)
    {
        cr[i+1]=cr[i]+ar[i];

        dr[i+1]=dr[i]+br[i];

        //cout<<cr[i]<<" "<<dr[i]<<"\n";
    }

    cin>>n;

    while(n--)
    {
        cin>>a>>b>>c;

        sum=0;

        if(a==2)
        {
            cout<<dr[c]-dr[b-1]<<"\n";
        }
        else if(a==1)
        {
            cout<<cr[c]-cr[b-1]<<"\n";
        }
    }
}
