/*
Author          : Md. Anwarul Habib
Dept. & Institute          : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name          : Codeforces- 262-B. Roma and Changing Signs
*/

#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,n,a,b,c,d,x,y,count1,count2,total=0;
    scanf("%d %d",&n,&k);

    int ar[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }



    for(i=0;i<n;i++)
    {
        total=total+ar[i];
    }
    printf("%d\n",total);

}

