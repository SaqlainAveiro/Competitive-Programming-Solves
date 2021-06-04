#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    char s[100000],t[100000];

    while(scanf("%s %s",&s,&t)!=EOF)
    {
        lli lens=strlen(s),lent=strlen(t);

        sum=0;

        for(j=0 , k=0 ; j<lent ; j++)
        {
            if(s[k]==t[j])
            {
                k++;
            }
            if(k==lens)
            {
                sum=1;
                break;
            }
        }
        if(sum==1)
        {
            printf("Yes\n");
        }
        else printf("No\n");
    }
}

