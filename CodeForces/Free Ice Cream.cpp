#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>n>>x;

    char ar;

    sum=x;

    for(i=1 ; i<=n ; i++)
    {
        cin>>ar>>y;

        if(ar=='+')
        {
            sum += y;
        }
        else if(ar=='-')
        {
            if(sum-y < 0)
            {
                total++;
            }
            else
            {
                sum -= y;
            }
        }
    }
    cout<<sum<<" "<<total<<"\n";
}

