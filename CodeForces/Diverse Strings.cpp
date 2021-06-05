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
        string ar;
        vector<lli>br;

        cin>>ar;

        for(j=0 ; j<ar.size() ; j++)
            br.push_back(ar[j]-96);

        sort(br.begin(),br.end());

        f=0;

        for(j=0 ; j<br.size()-1 ; j++)
        {
            if(br[j]+1!=br[j+1])
            {
                f=1;    break;
            }
        }
        if(f==1)    cout<<"No\n";
        else cout<<"Yes\n";
    }
}
