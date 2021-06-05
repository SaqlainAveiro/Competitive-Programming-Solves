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

    string ar;
    vector<lli>br;

    cin>>t>>ar;

    w=b=0;

    fr0(i,t)
    {
        if(ar[i]=='B') b++;

        else w++;
    }
 
    if(w==t || b==t)
    {
         cout<<"0\n";
    }
    else if(w%2!=0 && b%2!=0)
    {
        cout<<"-1\n";
    }
    else
    {
        k=0;

        while(k<3*t)
        {
            w=b=p=0;

            fr0(i,t-1)
            {
                if(k<3*t)
                {
                    if(ar[i]=='B')
                    {
                        k++;

                        br.push_back(i+1);      ar[i]='W';   
                        
                        if(ar[i+1]=='B')        ar[i+1]='W';

                        else                    ar[i+1]='B';  
                    }     
                }
                else break;
            }

            b=w=0;    
            
            fr0(i,t)     
            {
                if(ar[i]=='B') b++;
                else w++;
            }

            if(b==0)    break;

            if(b==1 && w%2==0 && ar[t-1]=='B')
            {
                for (j = 0; j < t-1; j+=2)
                {
                    ar[j]=ar[j+1]='B';  br.push_back(j+1);
                }
                break;
            }
        }

        //cout<<ar<<"\n";  
        
        k=br.size();

        cout<<k<<"\n";   fr0(j,k)    cout<<br[j]<<" ";   cout<<"\n";

    }
}