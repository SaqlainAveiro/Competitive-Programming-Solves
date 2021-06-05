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

    cin>>t;

    c=0;

    fr1(i,t)
    {
        string ar;    cin>>a>>b>>ar;

        f=ar.length();  c=0;

        fr0(j,f)
        {
            if(ar[j]=='1')  b--;
            else if(ar[j]=='0') a--;
        }

        fr0(j,f)
        {
            if(ar[j]!='?')
            {
                if(ar[f-j-1]=='?')
                {
                    if(ar[j]=='0') 
                    {
                        if(a>0)     ar[f-j-1]='0',  a--;
                        else    
                        {
                            //cout<<"F1\n";
                            c=-1;   break;
                        }
                    }  
                    else if(ar[j]=='1') 
                    {
                        if(b>0)     ar[f-j-1]='1',  b--;
                        else    
                        {
                            //cout<<"F2\n";
                            c=-1;   break;
                        }
                    }
                }
                else 
                {
                    if(ar[j]!=ar[f-j-1])    
                    {
                        //cout<<"F3\n";                        
                        c=-1;   break;
                    }
                }
            }
        }
        fr0(j,f)
        {
            if(ar[j]=='?' && ar[f-j-1]=='?')
            {
                if(j==f-j-1)
                {
                    if(a>0)     ar[f-j-1]='0',  a--;
                    else if(b>0)     ar[f-j-1]='1',  b--;
                    else    
                    {
                        //cout<<"F4\n";
                        c=-1;   break;
                    }
                }
                else
                {
                    if(a>1)     ar[j]=ar[f-j-1]='0',  a-=2;
                    else if(b>1)     ar[j]=ar[f-j-1]='1',  b-=2;
                    else    
                    {
                        //cout<<"F5\n";
                        c=-1;   break;
                    }
                }
            }
        }


        if(c!=0 || a>0 || b>0)   cout<<"-1\n";

        else cout<<ar<<"\n";

    }
}