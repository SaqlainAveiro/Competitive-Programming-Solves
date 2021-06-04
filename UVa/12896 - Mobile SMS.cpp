#include<bits/stdc++.h>

using namespace std;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)
#define Pi 2*acos(0.0)

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,s,r,f,sum=0,total=0;

int main()
{
    //read(in);

    char ar[10][10];

    ar[1][0]='.',ar[1][1]=',',ar[1][2]='?',ar[1][3]='"';
    ar[2][0]='a',ar[2][1]='b',ar[2][2]='c';
    ar[3][0]='d',ar[3][1]='e',ar[3][2]='f';
    ar[4][0]='g',ar[4][1]='h',ar[4][2]='i';
    ar[5][0]='j',ar[5][1]='k',ar[5][2]='l';
    ar[6][0]='m',ar[6][1]='n',ar[6][2]='o';
    ar[7][0]='p',ar[7][1]='q',ar[7][2]='r',ar[7][3]='s';
    ar[8][0]='t',ar[8][1]='u',ar[8][2]='v';
    ar[9][0]='w',ar[9][1]='x',ar[9][2]='y',ar[9][3]='z';
    ar[0][0]=' ';

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        vector<lli>cr,br;

        for(j=1 ; j<=n ; j++)    cin>>x,br.push_back(x);
        for(j=1 ; j<=n ; j++)    cin>>x,cr.push_back(x);

        for(j=0 ; j<n ; j++)   cout<<ar[ br[j] ][ cr[j]-1 ];

        cout<<"\n";
    }
}
