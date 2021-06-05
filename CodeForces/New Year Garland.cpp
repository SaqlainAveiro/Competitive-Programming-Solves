#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        lli r=0,g=0,b=0,total=0,num=0,m1=0,m2=0,m3=0,ar[3]={0};

        for(j=0 ; j<3 ; j++)
            cin>>ar[j];

        sort(ar,ar+3);

        if(ar[0]==ar[1] && ar[1]==ar[2])
        {
            printf("Yes\n");
        }
        else
        {
            m1=ar[2]-1;

            if(ar[0]+ar[1]>=m1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }

}

