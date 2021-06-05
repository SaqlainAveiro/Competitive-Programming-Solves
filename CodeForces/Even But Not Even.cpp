#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,s,r,f,sum=0,total=0;

int main()
{
    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        string ar,br;
        cin>>n;
        cin>>ar;

        sum=total=p=0;

        for(j=n-1 ; j>=0 ; j--)
        {
            if((ar[j]-48)%2!=0)
            {
                p=j;    sum=ar[j]-48;   br+=ar[j];  break;
            }
        }
        for(j=p-1 ; j>=0 ; j--)
        {
            sum+=(ar[j]-48);
            br+=ar[j];
            if(sum%2==0)
            {
                total=-1;
                break;
            }
        }
        if(total==-1)
        {
            for(j=br.size()-1 ; j>=0 ; j--)    cout<<br[j];

            cout<<"\n";
        }
        else    cout<<"-1\n";
    }
}
