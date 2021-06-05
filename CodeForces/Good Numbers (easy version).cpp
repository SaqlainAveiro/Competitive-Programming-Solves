#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,f,x,y,p,q,s,r,sum=0,total=0;

lli dp[100000]={0};

void good_number()
{
    if(f<m)
    {
        k++;
        dp[k]+=(sum+dp[f]);
        f++;
        good_number();
    }
    if(f==m)   return;
}


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t;

    dp[0]=1;    total=1;    k=1;    f=0;

    for(j=1 ; j<=9 ; j++)
    {
        sum=pow(3,j);        dp[k]=sum;      f=0;  m=k;
        good_number();
        k++;
    }

    /*cout<<"Result : ";
    for(i=0 ; i<k ; i++)
    {
        cout<<i+1<<". "<<dp[i]<<"  ";
    }
    cout<<"\n\n";*/

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        for(j=0 ; j<1100 ; j++)
        {
            if(n<=dp[j])
            {
                cout<<dp[j]<<"\n";  break;
            }
        }
    }
}
