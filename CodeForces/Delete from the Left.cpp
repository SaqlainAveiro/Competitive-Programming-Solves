#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,z,p,q,s,r,f,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);

    string ar,br;

    cin>>ar>>br;

    i=a=ar.size()-1;
    j=b=br.size()-1;
    f=0;

    while(i>=0 && j>=0)
    {
        if(ar[i]==br[j])
        {
            f++;    i--;    j--;
        }
        else break;
    }
    cout<<a+b+2-2*f<<"\n";
}
