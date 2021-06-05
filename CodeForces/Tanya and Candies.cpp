#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,s,r,f,sum=0,total=0,odd=0,even=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    vector<lli>ar;

    ar.push_back(0);

    for(i=1 ; i<=t ; i++)
    {
        cin>>x;     ar.push_back(x);

        if(i%2!=0)  odd+=x;
        else    even+=x;
    }

    p=q=m=0;

    for(i=1 ; i<=t ; i++)
    {
        if(i%2!=0)  p+=ar[i];
        else    q+=ar[i];

        sum=total=0;

        if(i%2!=0)
        {
            sum=odd-p+q;
            total=even-q+p-ar[i];

            cout<<sum<<" and "<<total<<"\n";

            if(sum==total)
            {
                m++;
            }
        }
        else
        {
            sum=even-q+p;
            total=odd-p+q-ar[i];

            cout<<sum<<" and "<<total<<"\n";

            if(sum==total)
            {
                m++;
            }
        }
    }
    cout<<m<<"\n";
}
