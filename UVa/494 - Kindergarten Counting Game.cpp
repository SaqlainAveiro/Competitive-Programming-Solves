#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0,res=0,ans=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    string ar;

    while(getline(cin,ar))
    {
        d=ar.size();

        ans=0;

        for(i=0 ; i<d-1 ; i++)
        {
            if((ar[i]>='A' && ar[i]<='Z' || ar[i]>='a' && ar[i]<='z') && (ar[i+1]<65 || ar[i+1]>90 && ar[i+1]<97 || ar[i+1]>122))
                ans++;
        }
        cout<<ans<<"\n";
    }
}
