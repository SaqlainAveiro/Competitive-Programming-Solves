/*
    Saqlain ; CSE - 41st Batch , AUST
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    scanf("%lld",&n);

    char ar[100000];

    for(i=1 ; i<=n ; i++)
    {
        scanf("%s",&ar);

        sum=0;
        total=0;

        long long int length=strlen(ar);

        if(length==1)
        {
            if(ar[0]=='?')
            {
                printf("a\n");
            }
            else printf("%s",ar);
        }

        else
        {
            if(ar[0]=='?')
            {
                if(ar[1]!='a')
                    ar[0]='a';
                else if(ar[1]!='b')
                    ar[0]='b';
                else if(ar[1]!='c')
                    ar[0]='c';
            }

            if(ar[length-1]=='?')
            {
                if(ar[length-2]!='a')
                    ar[length-1]='a';

                if(ar[length-2]!='b')
                    ar[length-1]='b';

                if(ar[length-2]!='c')
                    ar[length-1]='c';
            }

            for(j=0 ; j< length-1 ; j++)
            {
                if(ar[j]!='?' && ar[j+1]!='?')
                {
                    if(ar[j]==ar[j+1])
                    {
                        sum=1;
                        break;
                    }
                }
            }

            if(sum==1)
            {
                printf("-1\n");
            }
            else
            {
                for(j=1 ; j< length-1 ; j++)
                {
                    if(ar[j]=='?')
                    {
                        if(ar[j-1]!='a' && ar[j+1]!='a')
                        {
                            ar[j]='a';
                        }
                        else if(ar[j-1]!='b' && ar[j+1]!='b')
                        {
                            ar[j]='b';
                        }
                        else if(ar[j-1]!='c' && ar[j+1]!='c')
                        {
                            ar[j]='c';
                        }
                    }
                }
                printf("%s\n",&ar);
            }
        }

    }
}

