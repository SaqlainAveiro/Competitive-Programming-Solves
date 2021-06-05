#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

int main()
{
    //read(in);
    cin>>t;
    for(i=1 ; i<=t ; i++)
    {
        cin>>n;
        sum=1;
        j=2;
        while(j>0)
        {
            sum+=j;
            j*=2;
            if(n%sum==0)
            {
                cout<<n/sum<<"\n";
                break;
            }
        }
    }
}
