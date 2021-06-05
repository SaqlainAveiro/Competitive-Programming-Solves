#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0,count1=1;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    vector< pair<lli,lli> >ar,br;

    for(i=1 ; i<=t ; i++)
    {
        cin>>x>>y;
        ar.push_back(make_pair(x,y));
        br.push_back(make_pair(y,x));
    }
    sort(ar.begin(),ar.end());
    sort(br.begin(),br.end());

    sum=0;
    count1=1;
    for(i=t-1 ; i>=0 ; i--)
    {
        count1--;
        count1+=ar[i].second;
        sum+=ar[i].first;

        if(count1==0)   break;
    }
    count1=1;
    total=0;
    for(i=t-1 ; i>=0 ; i--)
    {
        count1--;
        count1+=br[i].first;
        total+=br[i].second;

        if(count1==0)   break;
    }
    //cout<<sum<<" and "<<total<<"\n";
    cout<<max(sum,total)<<"\n";
}
