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
        string a,b,c;

        total=0;

        cin>>a>>b>>c;

        for(j=0 ; j<a.size() ; j++)
        {
            if(c[j]==a[j] || c[j]==b[j])
            {
                total=0;
            }
            else
            {
                total=-1;
                break;
            }
        }

        if(total==0)
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }

}
