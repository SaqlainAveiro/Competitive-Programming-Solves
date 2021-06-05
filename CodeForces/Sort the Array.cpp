#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    lli ar[t],start=0,finish=0;

    for(i=0 ; i<t ; i++)
    {
        cin>>ar[i];
    }

    for(i=0 ; i<t-1 ; i++)
    {
        if(ar[i]>ar[i+1])
        {
            start=i;
            break;
        }
    }
    for(i=t-1 ; i>0 ; i--)
    {
        if(ar[i]<ar[i-1])
        {
            finish=i;
            break;
        }
    }

    if(start==0 && finish==0)
    {
        cout<<"yes\n1 1\n";
        return 0;
    }

    x=start;

    y=finish;

    while(x<=y)
    {
        swap(ar[x],ar[y]);
        x++;
        y--;
    }

    sum=0;

    for(i=0 ; i<t-1 ; i++)
    {
        if(ar[i]>ar[i+1])
        {
            sum=-5;
            break;
        }
    }

    if(sum==-5)
    {
        cout<<"no\n";
    }
    else
    {
        cout<<"yes\n"<<start+1<<" "<<finish+1<<"\n";
    }

}

