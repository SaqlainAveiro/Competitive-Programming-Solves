#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    lli ar[t][2],A=0,G=0,dif=0;

    for(i=0 ; i<t ; i++)
    {
        cin>>ar[i][0]>>ar[i][1];
    }

    for(i=0 ; i<t ; i++)
    {
        if(ar[i][0]<=ar[i][1])
        {
            if(abs(A+ar[i][0]-G) <= 500)
            {
                A=A+ar[i][0];
                cout<<"A";
            }
            else
            {
                G=G+ar[i][1];
                cout<<"G";
            }
        }
        else
        {
            if(abs(G+ar[i][1]-A) <= 500)
            {
                G=G+ar[i][1];
                cout<<"G";
            }
            else
            {
                A=A+ar[i][0];
                cout<<"A";
            }
        }
        //dif=abs(A-G);
    }
    cout<<"\n";

}
