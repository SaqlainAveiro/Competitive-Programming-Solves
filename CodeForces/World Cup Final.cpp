#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,group=0;

/*lli wc_final(lli group)
{

    if(b==a)
    {
        return sum=sum+1;

    }

    if(a<=group && b>group)
    {
        if(b%4!=0)
        {
            b=b+2;
        }
        i=k=1;

        while(1)
        {
            sum=b-2*i;
            k++;

            if(sum==group)
            {
               break;
            }
            i=i*2;
        }

        return k;
    }

    if(a <= group && b<=group)
    {
        group=group/2;

        return wc_final(group);
    }

    if(a>= group && b>=group)
    {
        group=(group+b)/2;

        if(group%2!=0)
            group--;

        return wc_final(group);
    }

}*/



int main()
{
    freopen("Input.txt","r",stdin);

    cin>>n>>x>>y;

    lli ar[n+1];

    group=n/2;

    a=min(x,y);
    b=max(x,y);

    if(a<=group && b>group)
    {
        printf("Final!\n");
    }
    else
    {
        sum=total=0;

        if(a%2!=0)
        {
            a++;
        }
        if(b%2!=0)
        {
           b++;
        }
        if(b==a)
        {
            sum=1;
        }
        else
        {
            if(a>=group)
            {
                a=a%group;

                if(a==0)
                {
                    a=group;
                }
            }
            if(b>=group)
            {
                b=b%group;

                if(b==0)
                {
                    b=group;
                }
            }


        }

        //printf("%lld\n",wc_final(group));

    }
}

