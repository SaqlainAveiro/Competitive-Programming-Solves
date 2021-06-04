#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    while(t--)
    {
        string ar;
        cin>>ar;
        sum=ar[ar.size()-1]-'0';
        n=sum;
        sum = sum%5;

        if(n==0 && ar.size()==1)  cout<<"1\n";
        else if(n==1 && ar.size()==1) cout<<"66\n";
        else if(sum==0) cout<<"76\n";
        else if(sum==1) cout<<"16\n";
        else if(sum==2) cout<<"56\n";
        else if(sum==3) cout<<"96\n";
        else if(sum==4) cout<<"36\n";

        }
}

