#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,cap=0,small=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    string ar;

    cin>>ar;

    for(i=0 ; ar[i]!='\0' ; i++)
    {
        if(ar[i]>='a' && ar[i]<='z')
        {
            small++;
        }
        else if(ar[i]>='A' && ar[i]<='Z')
        {
            cap++;
        }
    }
    if(small>=cap)
    {
        sum=32;

        for(i=0 ; ar[i]!='\0' ; i++)
        {
            if(ar[i]>='A' && ar[i]<='Z')
            {
                ar[i]=ar[i]+sum;
            }
        }
    }
    else if(cap>small)
    {
        sum=-32;

        for(i=0 ; ar[i]!='\0' ; i++)
        {
            if(ar[i]>='a' && ar[i]<='z')
            {
                ar[i]=ar[i]+sum;
            }
        }
    }
    for(i=0 ; ar[i]!='\0' ; i++)
    {
        cout<<ar[i];
    }
    cout<<"\n";
}

