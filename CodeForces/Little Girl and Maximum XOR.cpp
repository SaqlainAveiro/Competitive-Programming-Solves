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

string decimal_to_binary(lli x)
{
    string temp;

    while(x)
    {
        if(x%2!=0)      temp+='1';
        else    temp+='0';
        x/=2;
    }

    while(temp.size()<64)   temp+='0';

    reverse(temp.begin(),temp.end());

    return temp;
}

lli binary_to_decimal(string temp)
{
    p=ans=0;  res=1;     reverse(temp.begin(),temp.end());

    fr0(i,temp.size())
    {
        if(temp[i]=='1')      ans+=res;      res*=2;     
    }

    return ans;
}


int main()
{
    //FastIO;

    //read(in);    write(out);

    sf2(a,b);

    string maxi,mini,result;

    maxi=decimal_to_binary(b);
    mini=decimal_to_binary(a);

    result=mini;

    fr0(i,mini.size())
    {
        string tempmax=maxi,tempmin=mini;

        if(maxi[i]==mini[i])
        {
            if(mini[i]=='1')
            {
                tempmax[i]='0';

                if(binary_to_decimal(tempmax)>=a && binary_to_decimal(tempmax)<=b)
                {
                    result[i]='1'; 
                }
                else    result[i]='0';
            }
            else
            {
                tempmin[i]='1';

                if(binary_to_decimal(tempmin)>=a && binary_to_decimal(tempmin)<=b)
                {
                    result[i]='1';
                }
                else    result[i]='0';
            }
        }
        else    result[i]='1';

        //pf("Result : %lld , %lld , %lld\n",binary_to_decimal(result),binary_to_decimal(maxi),binary_to_decimal(mini));
    }
    pf("%lld\n",binary_to_decimal(result));
}