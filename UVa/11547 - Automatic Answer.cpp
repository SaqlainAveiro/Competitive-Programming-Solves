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
        double num=0,f1=0,f2=0;

        lli res=0;

        cin>>num;

        f1=(567/9);

        num=num*f1;

        num=num+7492;

        f2=(235/47);

        num=num*f2;

        num=num-498;

        res=num;

        res=(res/10)%10;

        cout<<abs(res)<<"\n";
    }
}
