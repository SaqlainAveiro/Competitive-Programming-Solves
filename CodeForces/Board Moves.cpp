#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        if(n==1)    cout<<"0\n";

        else
        {
            sum=total=0;    p=1;

            for(j=3 ; j<=n ; j+=2)
            {
                sum+=(p*p*8);
                p++;
            }
            cout<<sum<<"\n";
        }
    }
}
