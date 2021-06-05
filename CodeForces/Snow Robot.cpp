/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

#define pf printf
#define sc scanf

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,num;

int main()
{
    char ar[100000];

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        lli R,L,D,U;

        cin>>ar;

        R=D=L=U=0;

        for(j=0 ; ar[j]!='\0' ; j++)
        {
            if(ar[j]=='R')
            {
                R++;
            }
            else if(ar[j]=='L')
            {
                L++;
            }
            else if(ar[j]=='U')
            {
                U++;
            }
            else if(ar[j]=='D')
            {
                D++;
            }
        }

        R=min(R,L);
        L=R;
        U=min(U,D);
        D=U;

        if(L==0 && U>=2)
        {
            pf("2\nUD\n");
        }
        else if(U==0 && R>=2)
        {
            pf("2\nRL\n");
        }
        else
        {
            total=R+L+U+D;

            pf("%lld\n",total);

            for(k=1 ; k<=R ; k++)
            {
                pf("R");
            }
            for(k=1 ; k<=U ; k++)
            {
                pf("U");
            }
             for(k=1 ; k<=L ; k++)
            {
                pf("L");
            }
            for(k=1 ; k<=D ; k++)
            {
                pf("D");
            }
            pf("\n");
        }

    }

}

