/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        char ar[10000];
        cin>>ar;
        if(ar[strlen(ar)-1]=='o' && ar[strlen(ar)-2]=='p')
            printf("FILIPINO\n");
        else if(ar[strlen(ar)-1]=='u' && ar[strlen(ar)-2]=='s' && ar[strlen(ar)-3]=='e' && ar[strlen(ar)-4]=='d' || ar[strlen(ar)-1]=='u' && ar[strlen(ar)-2]=='s' && ar[strlen(ar)-3]=='a' && ar[strlen(ar)-4]=='m')
            printf("JAPANESE\n");
        else if(ar[strlen(ar)-1]=='a' && ar[strlen(ar)-2]=='d' && ar[strlen(ar)-3]=='i' && ar[strlen(ar)-4]=='n' && ar[strlen(ar)-5]=='m' )
            printf("KOREAN\n");
    }

}

