#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    char ar[1000],br[1000];

    cin>>ar>>br;

    for(i=0 ; ar[i]!='\0' ; i++)
    {
        if(ar[i]>='A' && ar[i]<='Z')
        {
            ar[i]=ar[i]+32;
        }
        if(br[i]>='A' && br[i]<='Z')
        {
            br[i]=br[i]+32;
        }
    }

    cout<<strcmp(ar,br)<<"\n";
}
