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

    //read(in);

    sf1(t);

    char ch1[t][55],ch2[t][55],temp[55];

    vector<lli>ar;

    fr0(i,t)    sf("%s %s",ch1[i],ch2[i]);

    fr0(i,t)    sf1(x),     ar.push_back(x);

    if(strcmp(ch1[ ar[0]-1 ] , ch2[ ar[0]-1 ])<0)    strcpy(temp,ch1[ ar[0]-1 ]);

    else    strcpy(temp,ch2[ ar[0]-1 ]);

    fr1(i,t-1)
    {
        a=b=1;

        if(strcmp(temp,ch1[  ar[i]-1 ])<0)   a=2;

        if(strcmp(temp,ch2[ ar[i]-1 ])<0)    b=2;

        if(a==1 && b==1)
        {
            a=-1;    break;
        }

        if(a==2 && b==2)
        {
            if(strcmp(ch1[ ar[i]-1 ],ch2[ ar[i]-1 ])>0)     strcpy(temp,ch2[ ar[i]-1 ]);

            else    strcpy(temp,ch1[ ar[i]-1 ]);
        }
        else if(a==2)   strcpy(temp,ch1[ ar[i]-1 ]);

        else if(b==2)   strcpy(temp,ch2[ ar[i]-1 ]);
    }

    if(a==-1)    pf("NO\n");

    else    pf("YES\n");
}
