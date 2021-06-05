#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        lli h=0,m=0;
        cin>>h>>m;

        h=23-h;
        m=60-m;

        h=h*60+m;

        cout<<h<<"\n";
    }

}

