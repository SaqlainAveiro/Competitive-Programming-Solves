#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,t,a,b,c,d,x,sum=0,total=0;

lli check_sorted(lli ar[],lli n)
{
    lli y=0;
    for(k=0 ; k<n-1 ; k++)
    {
        if(ar[k]>ar[k+1])
        {
            y=1;
            break;
        }
    }
    return y;
}

int main()
{
    /*ios_base :: sync_with_stdio(false);
    cin.tie(0);*/

    //freopen("Input.txt","r",stdin);

    cin>>t;

    lli n,m;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n>>m;

        lli ar[n]={0},br[m]={0},ind=0,ch=0;

        for(j=0 ; j<n ; j++)
            cin>>ar[j];
        for(j=0 ; j<m ; j++)
            cin>>br[j];

        ind=check_sorted(ar,n);

        if(ind==0)
        {
            cout<<"YES\n";
        }
        else
        {
            sort(br,br+m);

            ind=x=0;

            while(1)
            {
                j=br[x]-1;

                if(ar[j]>ar[j+1])
                {
                    swap(ar[j],ar[j+1]);
                }
                x++;

                if(x==m)
                {
                    x=0;
                    ind++;
                }

                ch=check_sorted(ar,n);

                /*for(j=0 ; j<n ; j++)
                {
                    cout<<ar[j]<<" ";
                }
                cout<<"\n\n";*/


                if(ch==0)
                {
                    cout<<"YES\n";
                    break;
                }
                else if(ind>4*m)
                {
                    cout<<"NO\n";
                    break;
                }
            }
        }
    }
}
