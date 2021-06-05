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

    cin>>t;

    if(t==1)
    {
        cout<<"2\n";    return 0;
    }

    a=2, b=1, c=3;

    while(1)
    {
        if(a*b>=t)  break;

        if(b>a)     a++;

        else    b++;

        c++;
    }
    cout<<c<<"\n";
}
