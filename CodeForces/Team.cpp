#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0,res=0,ans=0;

int main()
{
    //read(in);

    cin>>n>>m;

    if(n*2+2<m || n-1>m)
    {
        cout<<"-1\n";
        return 0;
    }

    string ar,br;

    f=min(n,m);

    if(n>m)     ar+='0';

    for(i=1 ; i<=2*f ; i++)
    {
        if(i%2!=0)  ar+='1',m--;
        else    ar+='0';
    }

    if(n>m) f++;

    for(i=0 ; i<2*f ; i++)
    {
        br+=ar[i];

        if(i<2*f-1 && m>0 && ar[i+1]=='0')
        {
            br+='1';  m--;
        }
    }

    if(m>0)     while(m--)  br+='1';

    for(i=0 ; i<br.size() ; i++)
    {
        if(br[i]=='1' || br[i]=='0')    cout<<br[i];
    }
    cout<<"\n";
}
