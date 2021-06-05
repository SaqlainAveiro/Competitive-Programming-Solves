/*
Author                        : Md. Anwarul Habib
Dept. & Institute          : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name             :  CF- 282/A-Bit++
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,n,x=0,sum=0;

    char ar[5];

    scanf("%d",&n);

    for(i=1 ; i<=n ; i++)
    {
        scanf("%s",&ar);

        if(ar[0]=='+' || ar[1]=='+' || ar[2]=='+')
        {
            x++;
            //printf("%d\n",x);
        }
        else if(ar[0]=='-' || ar[1]=='-' || ar[2]=='-')
        {
            x--;
            //printf("%d\n",x);
        }
    }
    printf("%d\n",x);
}

