#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,f,c,d,x,y,p,q,sum=0,total=0;

#define read(in) freopen("Input.txt","r",stdin)
#define write(out) freopen("Ouput.txt","w",stdout)

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //read(in);
    //write(out);

    cin>>t;

    while(t--)
    {
        char ar[9][9];

        map<lli,lli> mp,sp;

        for(i=0 ; i<9 ; i++)
        {
            for(j=0 ; j<9 ; j++)
            {
                cin>>ar[i][j];
            }
        }

        for(i=0 ; i<9 ; i++)
        {
            for(j=0 ; j<9 ; j++)
            {
                if(ar[i][j]=='7')
                {
                    ar[i][j]='1';break;
                }
            }
        }
        //cout<<"Resulted Matrix : \n\n";

        for(i=0 ; i<9 ; i++)
        {
            for(j=0 ; j<9 ; j++)
                cout<<ar[i][j];
            cout<<"\n";
        }
        cout<<"\n";
    }
}
