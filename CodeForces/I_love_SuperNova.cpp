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

    lli max1=0,min1=0;

    for(i=1 ; i<=t ; i++)
    {
        cin>>x;

        if(i==1)    min1=x;
        else if(i==2)
        {
            if(min1>x)
            {
                max1=min1;      min1=x;     sum++;
            }
            else if(min1 < x)
            {
                max1=x;     sum++;
            }
        }
        else
        {
            if(x>min1)
            {
                if(x>max1)
                {
                    sum++;      max1=x;     //cout<<x<<" ";
                }
            }
            else if(x<min1)
            {
                sum++;      min1=x;     //cout<<x<<" ";
            }
        }
    }
    cout<<sum<<"\n";
}
