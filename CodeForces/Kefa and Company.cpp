#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

int main()
{
    //read(in);

    vector< pair<lli,lli> >ar;
    vector<lli>br;

    cin>>n>>d;

    for(i=1 ; i<=n ; i++)
    {
        cin>>x>>y;
        ar.push_back(make_pair(x,y));
    }
    sort(ar.begin(),ar.end());

    sum=ar[0].first,    res=ar[0].second;   b=0;

    for(i=1 ; i<n ; i++)
    {
        //cout<<ar[i].first<<" and "<<ar[i].second<<"\n";

        if(sum+d > ar[i].first)    res+=ar[i].second;

        else
        {
            //cout<<res<<" and "<<sum<<"\n";
            br.push_back(res);
            sum=ar[b+1].first;
            res-=ar[b].second;
            b++;
            i--;
        }
    }
    br.push_back(res);

    sort(br.begin(),br.end());

    f=br.size()-1;

    //cout<<"\n\n";   for(j=0 ; j<=f ; j++)   cout<<br[j]<<" ";

    cout<<br[f]<<"\n";

}
