#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>a>>b;
        if(a==b)
        {
            cout<<"0\n";
        }
        else if(a<b)
        {
            if((b-a)%2==0)
            {
                cout<<"2\n";
            }
            else
            {
                cout<<"1\n";
            }
        }
        else if(a>b)
        {
            if((a-b)%2!=0)
            {
                cout<<"2\n";
            }
            else
            {
                cout<<"1\n";
            }
        }
    }

}

