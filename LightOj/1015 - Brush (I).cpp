#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;
        lli ar[n]={0};

        sum=0;
        for(j=0 ; j<n ; j++)
        {
            cin>>ar[j];

            if(ar[j]>=0)
            {
                sum+=ar[j];
            }
        }
        cout<<"Case "<<i<<": "<<sum<<"\n";
    }

}

