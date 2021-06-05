#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x=0,y,sum=0,total=0,num=0;

int main()
{
    /*ios_base :: sync_with_stdio(false);
    cin.tie(0);*/

    //freopen("Input.txt","r",stdin);

    string ar;

    cin>>ar;

    for(i=0 ; i<ar.size() ; i++)
    {
        sum += (ar[i]-48);
    }
    //cout<<"The sum is = "<<sum<<"\n";

    total=sum;

    if(sum>=10)
    {
        x=1;

        while(1)
        {
            while(total>0)
            {
                num += (total%10);
                total /= 10;
            }
            //cout<<"The sum is = "<<num<<"\n";

            if(num<10)
            {
                x++;
                break;
            }
            else
            {
                x++;
                total=num;
                num=0;
            }
        }
    }
    else if(sum>0 && sum<=9 && ar.size()>1)
    {
        x=1;
    }
    cout<<x<<"\n";
}
