#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0,res=0,ans=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t>>n;

    vector<lli>ar;
    map<lli,lli>mp;

    for(i=1 ; i<=t ; i++)
    {
        cin>>x;     ar.push_back(x);
    }

    k=1;    p=q=0;

    //cout<<"Results : ";

    for(i=0 ; i<t-1 ; i++)
    {
        if(ar[i]<=ar[i+1] && p==0)      mp[i]=k;

        if(ar[i]>ar[i+1] && p==0)        p=1,mp[i]=k;

        if(ar[i]>=ar[i+1] && p==1)      mp[i]=k;

        if(ar[i]<ar[i+1] && p==1)
        {
            q=i;

            mp[q]=k*(-1);

            while(ar[q]==ar[q-1])
            {
                mp[q-1]=k*(-1);
                q--;
            }

            k++;   p=0;
        }
        //cout<<mp[i]<<" ";
    }
    mp[i]=k;
    //cout<<mp[i]<<" ";

    /*cout<<"\n";
    for(i=0 ; i<t ; i++)
    {
        cout<<mp[i]<<" ";
    }
    cout<<"\n\n\n";*/

    for(i=0 ; i<n ; i++)
    {
        cin>>x>>y;

        p=mp[x-1];        q=mp[y-1];

        if(p==q || p>0 && q<0 && p==abs(q) || p<0 && q<0 && abs(q-p)==1 || p<0 && q>0 && abs(p)==q-1)  cout<<"Yes\n";

        else cout<<"No\n";

    }
    //cout<<"\n";
}
