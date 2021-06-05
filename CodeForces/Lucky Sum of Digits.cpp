#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    k=t;

    vector<lli>ar;
    total=0;
    sum=0;

    if(k%7==0)
    {
        for(i=1 ; i<=k/7 ; i++)     cout<<"7";
    }
    else
    {
        x=4;    y=7;

        while(1)
        {
            if(k%7!=0 && k>=0)
            {
                k-=x;   sum++;
            }
            if(k%7==0)
            {
                total=1;    break;
            }
            if(k<0)
            {
                total=2;    break;
            }

        }
        if(total==1)
        {
            for(i=1 ; i<=sum ; i++)     cout<<"4";
            for(i=1 ; i<=k/7 ; i++)      cout<<"7";
        }
        if(total==2)    cout<<"-1";

    }
    cout<<"\n";
}
