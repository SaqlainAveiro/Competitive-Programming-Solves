#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli t,a,b,sum=0,num=0,fum=0,a1,a2,b1,b2;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    while(t--)
    {
        cin>>a>>b;

        sum=num=fum=a1=a2=b1=b2=0;

        if(a>b)
        {
            swap(a,b);
        }

        a1=a%10;
        a2=a/10;
        b1=b%10;
        b2=b/10;

        if(a<=9 && b<=9)
        {
            sum = a+b;
        }

        else if(a<=9 && b>9 || a>9 && b<=9)
        {
            sum = b2*10 + a1 + b1;

            num = a1*10 + b1 + b2;

            //cout<<"\n"<<sum<<" = "<<b2*10+a1<<" + "<<b1<<"\n";

            //cout<<"\n"<<num<<" = "<<a1*10+b1<<" + "<<b2<<"\n";

            fum=a+b;
            sum = max(sum,num);
            sum = max(fum,sum);
        }

        else if(a>9 && b>9)
        {
            if(a%10==0 && b%10==0)
            {
                sum += a+b;
            }
            else
            {
                sum = b1*10 + a1 + b2*10 + a2;

                //cout<<sum<<" = "<<b1*10 + a1<<" + "<<b2*10 + a2<<"\n";

                num = a2*10 + b1 + b2*10 + a1;

                //cout<<num<<" = "<<a2*10 + b1 <<" + "<<b2*10 + a1<<"\n";

                fum = a2*10 + b2 + a1*10 + b1;

                //cout<<fum<<" = "<<a2*10 + b2<<" + "<<a1*10 + b1<<"\n";

                sum = max(sum,num);

                sum = max(fum,sum);
            }
        }
        cout<<sum<<"\n";
    }
}
