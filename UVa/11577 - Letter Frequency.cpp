#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        string ar;

        getline(cin,ar);

        lli len=ar.size() , br[26]={0} , cr[26]={0};

        for(j=0 ; j<len ; j++)
        {
            if(ar[j]>='A' && ar[j]<='Z')
            {
                ar[j]=ar[j]+32;

            }
        }


    }

}

