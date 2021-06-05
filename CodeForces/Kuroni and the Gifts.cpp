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
        cin>>n;

        lli ar[n]={0},br[n]={0};

        for(j=0 ; j<n ; j++)
        {
            cin>>ar[j];
        }
        for(j=0 ; j<n ; j++)
        {
            cin>>br[j];
        }

        sort(ar,ar+n);
        sort(br,br+n);

        sum=total=0;

        lli cr[50000]={0};

        for(j=0 ; j<n ; j++)
        {
            cout<<ar[j]<<" ";
        }
        cout<<"\n";
        for(j=0 ; j<n ; j++)
        {
           for(k=0 ; k<n ; k++)
           {
               sum=ar[j]+br[k];

               if(cr[sum]==-1 || br[k]==-1)
               {
                   continue;
               }
               else
               {
                   cr[sum]=-1;
                   cout<<br[k]<<" ";
                   br[k]=-1;
                   break;
               }
           }
        }
        cout<<"\n";
    }
}
