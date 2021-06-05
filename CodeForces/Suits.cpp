/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

#define pf printf
#define sc scanf

lli i,j,k,l,m,n,t,a,b,c,d,e,f,x,y,sum=0,total=0,min_scarf=0,min_vest=0,min_jacket=0,min_1st=0,min_2nd=0;

int main()
{
    cin>>a>>b>>c>>d>>e>>f;

    if(f>=e)
    {
        if(c<=b && c<=d)
        {
            min_2nd=c;
        }
        else if(b<=d && b<=c)
        {
            min_2nd=b;
        }
        else if(d<=b && d<=c)
        {
            min_2nd=d;
        }
        sum=sum+min_2nd*f;

        c=c-min_2nd;
        b=b-min_2nd;
        d=d-min_2nd;

        if(a<=d)
        {
            min_1st=a;
        }
        else if(d<=a)
        {
            min_1st=d;
        }

        sum=sum+min_1st*e;

        a=a-min_1st;
        d=d-min_1st;
    }

    else if(e>f)
    {
        if(a<=d)
        {
            min_1st=a;
        }
        else if(d<=a)
        {
            min_1st=d;
        }

        sum=sum+min_1st*e;

        a=a-min_1st;
        d=d-min_1st;

        if(c<=b && c<=d)
        {
            min_2nd=c;
        }
        else if(b<=d && b<=c)
        {
            min_2nd=b;
        }
        else if(d<=b && d<=c)
        {
            min_2nd=d;
        }
        sum=sum+min_2nd*f;

        c=c-min_2nd;
        b=b-min_2nd;
        d=d-min_2nd;
    }

    pf("%lld\n",sum);
}

