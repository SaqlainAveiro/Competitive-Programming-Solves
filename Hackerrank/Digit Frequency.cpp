/*
Author            : Md. Anwarul Habib
Dept. & Institute : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name      : Hackerrank -Digit Frequency
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,br[10]={0};

int main()
{
    char ar[10000];
    scanf("%s",&ar);

    for(i=0 ; i<strlen(ar) ; i++)
    {
        if(ar[i]=='1')
        {
            br[1]++;
        }
        else if(ar[i]=='2')
        {
            br[2]++;
        }
        else if(ar[i]=='3')
        {
            br[3]++;
        }
        else if(ar[i]=='4')
        {
            br[4]++;
        }
        else if(ar[i]=='5')
        {
            br[5]++;
        }
        else if(ar[i]=='6')
        {
            br[6]++;
        }
        else if(ar[i]=='7')
        {
            br[7]++;
        }
        else if(ar[i]=='8')
        {
            br[8]++;
        }
        else if(ar[i]=='9')
        {
            br[9]++;
        }
        else if(ar[i]=='0')
        {
            br[0]++;
        }
    }
    for(i=0 ; i<10 ; i++)
        printf("%d ",br[i]);
}

