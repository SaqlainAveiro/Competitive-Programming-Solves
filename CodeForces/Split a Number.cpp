#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,len=0,flag=0,res=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    string ar,br,cr;

    deque<lli>xr;
    deque<lli>::iterator it;

    cin>>ar;

    if(t%2==0)
    {
        len=t/2;        k=len-1;
    }
    else
    {
        len=1+t/2;      k=len-2;
    }

    if(ar[len+1]=='0')
    {
        for(j=len ; j>=0 ; j--)
        {
            if(ar[j]!='0')
                break;
            else    total++;
        }
        for(k=len+1 ; k<t ; k++)
        {
            if(ar[k]!='0')
                break;
            else    total++;
        }


    }

    br=ar.substr(0,len);
    cr=ar.substr(len,t-1);

    flag=0;

    for(i=len-1 ; i>=0 ; i--)
    {
        res=flag+(br[i]+cr[k])-96;
        flag=0;

        if(res>9)
        {
            xr.push_front(res%10);
            flag = res/10;
        }
        else
        {
            xr.push_front(res);
        }
        if(k>0)
        {
            k--;
        }
        else if(k==0)
        {
            break;
        }
    }

    if(i>k)
    {
        res=flag+(br[0])-48;

        if(res>9)
        {
            xr.push_front(res%10);
        }
        else
        {
            xr.push_front(res);
        }
    }
    else if(i==k)
    {
        if(flag>0)
        {
            xr.push_front(flag);
        }
    }

    for(it=xr.begin() ; it!=xr.end() ; it++)
        cout<<*it;

    cout<<"\n";
}
