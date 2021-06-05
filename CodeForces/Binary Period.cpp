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
        string ar,br;

        cin>>ar;

        sum=total=0;

        for(j=0 ; j<ar.size() ; j++)
        {
            if(ar[j]=='0')  sum++;
            if(ar[j]=='1')  total++;
        }
        if(sum==0 || total==0)
        {
            cout<<ar<<"\n";
        }
        else
        {
            if(ar[0]=='1')
                a='1',b='0';
            else    a='0',b='1';

            for(j=1 ; j<=ar.size()*2 ; j++)
            {
                if(j%2!=0)  br+=a;
                else    br+=b;
            }
            cout<<br<<"\n";
        }
    }
}
