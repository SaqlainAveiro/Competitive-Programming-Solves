#include<bits/stdc++.h>

using namespace std;

int gcd(int a, int b )
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}

int main()
{
    int i,j,k,a,b,c,sum,x,y,t,n;

    scanf("%d",&t);

    for(i=1 ; i<=t ; i++)
    {
        scanf("%d %d %d",&a,&b,&c);

        x=gcd(c,a);
        y=gcd(c,b);


        if()
        {
            printf("Case %d: Yes\n",i);
        }
        else printf("Case %d: No\n",i);
    }
}
