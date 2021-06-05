#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

#define read(in) freopen("Input.txt","r",stdin)

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    while(t--)
    {
        cin>>n>>a>>b;

        lli suba=min(n,a);

        string ar;

        k=97;
        d=0;
        for(i=1 ; i<=a ; i++)
        {
            ar+=k;
            d++;
            if(d<b)
            {
                k++;
            }
        }
        //cout<<ar<<"\n";
        d=0;
        for(i=0 ; i<n ; i++)
        {
            cout<<ar[d];
            d++;
            if(d==a)
                d=0;
        }
        cout<<"\n";
    }

}

