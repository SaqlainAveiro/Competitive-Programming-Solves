#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    while(t--)
    {
        string ar;
        cin>>ar;
        vector<lli>br;

        lli ans=0,res=0,len=ar.size(),len1=0,len2=0;

        for(j=0 ; j<len ; j++)
        {
            if(ar[j]=='R')
            {
                ans=max(ans,len1);
                len1=0;
            }
            else    len1++;
        }
        ans=max(ans,len1);
        len1=0;

        cout<<ans+1<<"\n";
    }
}
