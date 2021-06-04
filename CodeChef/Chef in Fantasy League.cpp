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
        cin>>n>>s;

        lli ar[n]={0},mini1=INT_MAX,mini2=INT_MAX ;


        for(j=0 ; j<n ; j++)
        {
            cin>>ar[j];
        }
        for(j=0 ; j<n ; j++)
        {
            cin>>x;
            if(x==0)
                mini1=min(mini1,ar[j]);
            else
                mini2=min(mini2,ar[j]);
        }

        if(mini1+mini2+s<=100)
            cout<<"yes\n";
        else
            cout<<"no\n";
    }
}

