#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    cin>>t;
    char ar[101],br[101];
    cin>>ar;

    //freopen("Input.txt","r",stdin);

    for(i=0 ; i<t ; i++)
    {
        if(t%(i+1)==0)
        {
            for(j=i , k=0 ; j>=0 , k<=i ; j--,k++)
            {
                br[k]=ar[j];
            }
            for(j=i+1 ; j<t ; j++)
            {
                br[j]=ar[j];
            }
            for(j=0 ; j<t ; j++)
            {
                ar[j]=br[j];
            }
        }
    }
    printf("%s\n",ar);
}

