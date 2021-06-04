/*
                SAqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,Time=0;

int main()
{
    scanf("%lld",&t);

    for(j=1 ; j<=t ; j++)
    {
        scanf("%lld",&n);

        char s[n][20];
        char sub[20];
        long long int day[n],check=0,D=0,s1=0,s2[n];

        for(i=0 ; i<n ; i++)
        {
            scanf("%s",&s[i]);
            scanf("%lld",&day[i]);
            s2[i]=strlen(s[i]);
        }
        scanf("%lld",&Time);
        scanf("%s",&sub);

        /*printf("\n\nNow : \n\n");

        for(i=0 ; i<n ; i++)
        {
            printf("%s : \t",s[i]);
            printf("%lld\n\n",day[i]);
        }*/

        s1=strlen(sub);

        for(i=0 ; i<n ; i++)
        {
            if(s1==s2[i])
            {
                for(k=0 ; k<s1 ; k++)
                {
                    if(sub[k]==s[i][k])
                    {
                        check=1;
                    }
                    else
                    {
                        check=0;
                        break;
                    }
                }
                if(check == 1)
                {
                    D = day[i];
                    break;
                }
            }
        }

        if(check == 1)
        {
            if(Time >= D)
            {
                printf("Case %lld: Yesss\n",j);
            }
            else if(D > Time && D <=Time+5)
            {
                printf("Case %lld: Late\n",j);
            }
            else if(D > Time+5)
            {
                printf("Case %lld: Do your own homework!\n",j);
            }
        }
        else
            printf("Case %lld: Do your own homework!\n",j);
    }
}
