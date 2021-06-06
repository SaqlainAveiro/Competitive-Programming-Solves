#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,sum=0,total=0,count1=0,ans=0,res=0;


int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    cin>>t>>x;

    vector<lli>ar;

    for(i=1 ; i<=t ; i++)
    {
        cin>>p;     ar.push_back(p);
    }
    sort(ar.begin(),ar.end());

    count1=0;	y=max(x,ar[0]);    p=0;	sum=-1;

    for(i=0 ; i<t ; i++)
    {
        if(ar[i]-y>0)
        {
            sum=ar[i]-y;       count1++;

            p=max(x,sum);

            y+=p;
        }
    }
    cout<<count1+1<<"\n";
}
