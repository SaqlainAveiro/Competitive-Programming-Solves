#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        lli num=0,sel=1,ans=0,res=0,n1=-1,n2=-1,n3=-1;

        cin>>n;

        lli ar[n]={0},cr[6000]={0};

        for(j=0 ; j<n ; j++)
        {
            cin>>ar[j];
        }

        n1=n2=n3=-1;

        for(k=0 ; k<n-2 ; k++)
        {
            n1=ar[k];

            n3=-1;

            for(j=k+2 ; j<n ; j++)
            {
                if(ar[j]==n1)
                {
                    n3=-5;
                    break;
                }
            }
            if(n3==-5)
                break;
        }

        if(n3==-5)
        {
            cout<<"YES\n";
            //cout<<"Ans = "<<n1<<" "<<n2<<" "<<n1<<"\n";
        }
        else if(n3==-1)
        {
            cout<<"NO\n";
            //cout<<"Ans = "<<n1<<" "<<n2<<" "<<"\n";
        }
    }
}
