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

    cin>>t>>k;

    vector<lli>ar;

    for(i=1 ; i<=t ; i++)
    {
        cin>>x;     ar.push_back(x);
    }
    sort(ar.begin(),ar.end());

    b=(1+t)/2;

    if(ar[b-1]==k)  cout<<"0\n";
    else
    {
        sum=0;
        if(ar[b-1]<k)
        {
            for(i=b-1 ; i<t ; i++)
            {
                if(ar[i]>k) break;

                sum+=(k-ar[i]);
            }
            cout<<sum<<"\n";
        }
        else
        {
            for(i=b-1 ; i>=0 ; i--)
            {
                if(ar[i]<k) break;

                sum+=(ar[i]-k);
            }
            cout<<sum<<"\n";
        }
    }
}
