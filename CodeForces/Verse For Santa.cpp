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
        cin>>n>>s;
        vector<lli>ar;
        vector< pair<lli,lli> > br;

        for(j=1 ; j<=n ; j++)
        {
            cin>>x;     ar.push_back(x);
        }

        sum=total=p=q=m=0;

        for(j=0 ; j<ar.size() ; j++)
        {
            if(ar[j]<=s && sum+ar[j]<=s)
            {
                sum+=ar[j];     br.push_back(make_pair(ar[j],j+1));    total++;
                //cout<<"Added : "<<ar[j]<<" with index : "<<j+1<<"\n\n";
            }
            else if(sum+ar[j]>s)
            {
                if(p==0)
                {
                    if(br.size()>0)
                    {
                        sort(br.begin(),br.end());
                        m=br[br.size()-1].first;
                        if(m<ar[j])
                        {
                            m=ar[j];    q=j+1;
                        }
                        else
                        {
                            q=br[br.size()-1].second;   sum-=m;     j--;    total--;
                        }
                    }
                    else
                    {
                        q=j+1;
                        m=1;
                    }
                    p=1;
                    //cout<<"Skipped : "<<m<<" with index : "<<q<<"\n\n";
                }
                else    break;
            }
        }
        //cout<<total<<" gifts and skipped index : "<<q<<"\n\n\n";
        cout<<q<<"\n";

    }
}
