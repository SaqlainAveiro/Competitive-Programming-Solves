#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    cin>>t;

    char s[100];

    cin>>s;

    //freopen("Input.txt","r",stdin);

    for(i=0 ; i<t-2 ; i++)
    {
        if(s[i]=='x'&&s[i+1]=='x'&&s[i+2]=='x')
        {
            sum++;
        }
    }
    printf("%lld\n",sum);

}

