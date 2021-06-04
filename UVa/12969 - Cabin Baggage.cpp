/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    double len,wid,dep,wei,num;
    scanf("%lld",&t);

    for(i=1 ; i<=t ; i++)
    {
        scanf("%lf %lf %lf %lf",&len,&wid,&dep,&wei);

        num=len+wid+dep;
        //printf("Num = %.2lf\n",num);

        if( ( ( len <=56.00 && wid <= 45.00 && dep <=25.00 ) || num<=125.00 ) && wei<=7.00 )
        {
            printf("1\n");
            total++;
        }
        else printf("0\n");
    }
    printf("%lld\n",total);
}

