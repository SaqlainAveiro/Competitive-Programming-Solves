#include<bits/stdc++.h>

using namespace std;

#define FastIO ios_base :: sync_with_stdio(false), cin.tie(0), cout.tie(0)
#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Output.txt","w",stdout)
#define pf printf
#define sf scanf
#define fr0(i,n) for(long long int i=0 ; i<n ; i++)
#define fr1(i,n) for(long long int i=1 ; i<=n ; i++)
#define fr2(i,n) for(long long int i=n ; i>=1 ; i--)
#define frx(i,x,n) for(long long int i=x ; i<=n ; i++)
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

    //read(in);    write(out);

    char ch[4][4],c1;

    fr0(i,4)  fr0(j,4)  cin>>ch[i][j];

    fr0(i,4)
    {
        fr0(j,4)
        {
            if(j+1<4 && i+1<4)
            {
                if(ch[i][j]=='#' && ch[i+1][j]=='#' && ch[i][j+1]=='#' && ch[i+1][j+1]=='#')
                {
                    res=-1;     break;
                }
                if(ch[i][j]=='.' && ch[i+1][j]=='.' && ch[i][j+1]=='.' && ch[i+1][j+1]=='.')
                {
                    res=-1;     break;
                }
            }
            if(ch[i][j]=='.')   
            {
                c1='#'; 
            }     
            else    c1='.';
            
            if(j+1<4 && i+1<4 && ch[i][j+1]==c1 && ch[i+1][j]==c1 && ch[i+1][j+1]==c1)
            {
                res=-1;     break;
            }
            if(j-1>=0 && i-1>=0 && ch[i][j-1]==c1 && ch[i-1][j]==c1 && ch[i-1][j-1]==c1)
            {
                res=-1;     break;
            }
            if(j+1<4 && i-1>=0 && ch[i][j+1]==c1 && ch[i-1][j]==c1 && ch[i-1][j+1]==c1)
            {
                res=-1;     break;
            }
            if(j-1>=0 && i+1<4 && ch[i][j-1]==c1 && ch[i+1][j]==c1 && ch[i+1][j-1]==c1)
            {
                res=-1;     break;
            }
        }
        if(res==-1)     
        {
            cout<<"YES\n";        return 0;
        }
    }
    cout<<"NO\n";
}