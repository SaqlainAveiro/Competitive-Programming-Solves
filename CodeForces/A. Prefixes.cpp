/*
Author            : Md. Anwarul Habib
Dept. & Institute : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name      : CF-1216-A. Prefixes
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y=0,sum=0,total=0,a1=0,b1=0;

int main()
{
    char ar[200001],temp;

    scanf("%lld",&n);

    getchar();

    scanf("%s",&ar);

    getchar();

    for(i=0 ; i<n ; i=i+2)
    {
        if(ar[i]==ar[i+1])
        {
            if(ar[i]=='a')
            {
                ar[i]='b';
                sum++;
            }
            else if(ar[i]=='b')
            {
                ar[i]='a';
                sum++;
            }
        }
    }

    printf("%lld\n",sum);

    for(i=0 ; i<n ; i++)
    {
        printf("%c",ar[i]);
    }
}
