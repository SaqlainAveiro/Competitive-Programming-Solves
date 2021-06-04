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
        cin>>n>>k;

        lli ar[n+1]={0};

        for(j=1 ; j<=n ; j++)   cin>>ar[j];

        if(k==1 || n==1)    cout<<"yes\n";
        else
        {
            sum=total=0;

            for(j=1 ; j<=n-k ; j++)
            {
                if(ar[j]>ar[j+k])   swap(ar[j],ar[j+k]);
            }
            sum=1;
            for(j=n-k+1 ; j<=n ; j++)
            {
                if(ar[j]>ar[j+1])
                {
                    sum=0;  break;
                }
            }
            if(sum==1)  cout<<"yes\n";
            else cout<<"no\n";
        }
    }
}
