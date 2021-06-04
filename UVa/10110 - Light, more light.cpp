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

    read(in);

    while(1)
    {
        cin>>n;

        if(n==0)    break;

        k=sqrt(n);
        sum=0;

        for(i=1 ; i<=n ; i++)
        {
            if(n%i==0)
            {
                cout<<n/i<<" ";
            }
        }
        cout<<"\n";
    }

}
