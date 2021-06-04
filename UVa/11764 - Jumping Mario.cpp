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
        for(j=1 ; j<=n ; j++)   cin>>x,ar.push_back(x);

        p=q=0;

        for(j=1 ; j<n ; j++)
        {
            if(ar[j-1]>ar[j])   p++;
            else if(ar[j-1]<ar[j])  q++;
        }
        cout<<"Case "<<i<<": "<<q<<" "<<p<<"\n";
    }
}
