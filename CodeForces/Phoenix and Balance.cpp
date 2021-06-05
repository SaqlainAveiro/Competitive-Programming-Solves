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
        vector<lli>ar;

        sum=1,total=p=0;

        if(n==2)
        {
            cout<<"2\n";
            continue;
        }

        for(j=1 ; j<=n ; j++)
        {
            sum*=2;

            ar.push_back(sum);

            if(j<n/2)   total+=sum;
            if(j>=n/2 && j<n)   p+=sum;

        }
        total+=ar[ar.size()-1];

        cout<<total-p<<"\n";
    }
}
