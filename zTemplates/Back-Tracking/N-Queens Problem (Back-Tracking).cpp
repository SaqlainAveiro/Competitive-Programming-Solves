#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli a,b,c,d,e,f,g,h,i,j,k,l,m,n,o,p,q,r,s,t,u,v,w,x,y,z,sum=0,total=0,res=0,ans=0;

lli Col_Queens[10];
vector<lli>NQueens_Solutions[10];

lli PlaceCheckQueens(lli k, lli z)
{
    for(lli j=1 ; j<k ; j++)
    {
        if(Col_Queens[j]==z || abs(Col_Queens[j]-z)==abs(j-k))
        {
            return 0;
        }
    }
    return 1;
}

void N_Queens(lli k, lli n)
{
    for(lli f=1 ; f<=n ; f++)
    {
        if(PlaceCheckQueens(k,f)==1)
        {
            Col_Queens[k]=f;

            if(k==n)
            {
                cout<<"Solution No. "<<res+1<<" (Column Numbers) : \n\n";

                for(lli i=1 ; i<=n ; i++)
                {
                    for(lli j=1 ; j<=n ; j++)
                    {
                        if(Col_Queens[i]==j)    cout<<"Q ";

                        else    cout<<". ";
                    }
                    cout<<"\n";
                }
                cout<<"\n\n";

                res++;
            }
            else   N_Queens(k+1,n);
        }
    }
}


int main()
{
    //FastIO;

    //read(in);

    cout<<"Enter the Number of Queens: ";
    cin>>n;

    cout<<"\n\nUsing Back-Tracking Algorithm, All possible solutions for placing the Queens on the Chessboard are: \n\n";
    N_Queens(1,n);
}
