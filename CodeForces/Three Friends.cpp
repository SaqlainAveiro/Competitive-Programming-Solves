/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    scanf("%lld",&n);
    lli ar[4];
    ar[0]=-1;

    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=3 ; j++)
            cin>>ar[j];

        sort(ar,ar+4);

        if(ar[1]==ar[2] && ar[2]==ar[3])
        {
            total=0;
        }
        else
        {
            if(ar[1]==ar[2])
            {
                if((ar[3]-1)>ar[2])
                {
                    ar[1]=ar[1]+1;
                    ar[2]=ar[1];
                    ar[3]=ar[3]-1;
                }
                else if((ar[3]-1)==ar[2])
                {
                    ar[3]=ar[2];
                }
            }
            else if(ar[2]==ar[3])
            {
                if((ar[2]-1)>ar[1])
                {
                    ar[1]=ar[1]+1;
                    ar[2]=ar[2]-1;
                    ar[3]=ar[2];
                }
                else if((ar[2]-1)==ar[1])
                {
                    ar[1]=ar[1]+1;
                }
            }

            else if(ar[1]!=ar[2] && ar[2]!=ar[3])
            {
                if((ar[2]-1)>ar[1])
                {
                    ar[1]=ar[1]+1;
                }

                else if((ar[2]-1)==ar[1])
                {
                    ar[1]=ar[1]+1;
                }

                if((ar[3]-1)>=ar[2])
                {
                    ar[3]=ar[3]-1;
                }
            }
                total=abs(ar[1]-ar[2])+abs(ar[1]-ar[3])+abs(ar[2]-ar[3]);
        }

        cout<<total<<endl;
        total=0;
    }
}

