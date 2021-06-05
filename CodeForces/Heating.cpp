#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,s,r,f,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>c>>s;

        if(c>=s)    cout<<s<<"\n";
        else
        {
            sum=s/c;            total=s%c;
            lli ar[c];k=p=0;

            for(j=0 ; j<c ; j++)    ar[j]=sum;

            if(total>0)
            {
                while(total)
                {
                    ar[k]++;
                    total--;
                    k++;
                    if(k==c)    k=0;
                }
                for(j=0 ; j<c ; j++)    p+=(ar[j]*ar[j]);
                cout<<p<<"\n";
            }
            else    cout<<c*(sum*sum)<<"\n";
        }
    }
}
