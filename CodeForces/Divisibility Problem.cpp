#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    i=1;

    while(t--)
    {
        cin>>a>>b;

        if(a%b==0)  cout<<"0\n";

        else
        {
            if(a<b)
            {
                cout<<abs(a-b)<<"\n";
            }
            else
            {
                sum=a/b;

                sum = b*(sum+1);

                cout<<abs(a-sum)<<"\n";
            }
        }

    }

}

