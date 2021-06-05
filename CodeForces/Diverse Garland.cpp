#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(int i=0 ; i<n ; i++)
#define fr1(i,n) for(int i=1 ; i<=n ; i++)
#define fr2(i,n) for(int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(int i=x ; i<=n ; i++)
#define sf1(val) scanf("%lld",&val)
#define sf2(val1,val2) scanf("%lld %lld",&val1,&val2)
#define INF 999999999999999999
#define Pi 2*acos(0.0)
#define len 200000

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

int main()
{
    //FastIO;

    //read(in);

    string ar,br,cr;
    char ch,sh;

    cin>>t>>ar;

    fr0(i,t-1)  if(ar[i]!=ar[i+1])  br+=ar[i];   br+=ar[t-1];

    d=0;    cr=ar;

    fr0(i,t-1)
    {
        if(ar[i]==ar[i+1])
        {
            if(br.size()>1)
            {
                if(br[d+1]=='R')
                {
                    if(cr[i]=='G')  ch='B';     else ch='G';
                }
                else if(br[d+1]=='G')
                {
                    if(cr[i]=='R')  ch='B';     else ch='R';
                }
                else if(br[d+1]=='B')
                {
                    if(cr[i]=='G')  ch='R';     else ch='G';
                }
            }
            else if(br.size()==1)
            {
                if(cr[i]=='G')  ch='B';     else ch='G';
                if(cr[i]=='R')  ch='G';     else ch='R';
                if(cr[i]=='B')  ch='R';     else ch='B';
            }
            d++;    sh=cr[i];    cr[i+1]=ch;    i+=2;

            while(i<t-1)
            {
                if(cr[i]!=sh)   break;    cr[i]=ch;

                if(cr[i+1]==sh)     i+=2;      else    break;
            }
            i--;
        }
    }
    fr0(i,t-1)
    {
        if(cr[i]==cr[i+1])
        {
            if(cr[i]=='R')  cr[i+1]='B';
            else if(cr[i]=='G')  cr[i+1]='B';
            if(cr[i]=='B')  cr[i+1]='R';
        }
    }
    sum=0;
    fr0(i,t)    if(ar[i]!=cr[i])    sum++;

    cout<<"Change = "<<sum<<"\n"<<cr<<" with\n"<<ar<<"\n";
}
