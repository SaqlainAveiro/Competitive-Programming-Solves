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
        cin>>n>>k>>d;
        vector<lli>ar,br;
        set<lli>st;
        set<lli>::iterator it;
        map<lli,lli>mp;

        for(j=1 ; j<=n ; j++)
        {
            cin>>x;     ar.push_back(x);    if(j<=d) mp[x]++;
        }

        p=d;q=0;

        for(j=0 ; j<d && d<=n ; j++)
        {
            st.insert(ar[j]);

            if(q==1)    mp[ ar[j] ]++;

            if(j+1==d)
            {
                sum=st.size();  q=1;

                br.push_back(sum);

                /*cout<<"Shows : ";
                for(it=st.begin() ; it!=st.end() ; it++)
                {
                    cout<<*it<<" ";
                }
                cout<<"\n\nUnique Shows : "<<sum<<"\n\n";*/

                st.erase(ar[j+1-p]);

                mp[ ar[j+1-p] ]--;

                if(mp[ ar[j+1-p] ]>0)   st.insert(ar[j+1-p]);

                d++;
            }
        }
        //cout<<"\nResult : ";
        sort(br.begin(),br.end());
        cout<<br[0]<<"\n";
    }
}
