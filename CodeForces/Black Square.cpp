#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>a>>b>>c>>d;

    string ar;

    cin>>ar;

    for(i=0 ; ar[i]!='\0' ; i++)
    {
        sum=ar[i]-48;

        if(sum==1)
        {
            total=total+a;
        }
        if(sum==2)
        {
            total=total+b;
        }
        if(sum==3)
        {
            total=total+c;
        }
        if(sum==4)
        {
            total=total+d;
        }
    }
    cout<<total<<"\n";

}
