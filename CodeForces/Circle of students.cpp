#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,k,l,m,n,t,dif,stu=0;
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        int ar[m];

        for(j=0;j<m;j++)
        {
            scanf("%d",&ar[j]);
        }

        stu=0;
        dif=0;

        for(j=0 ; j<m-1 ; j++)
        {
            if(ar[j] > ar[j+1])
            {
                dif=ar[j]-ar[j+1];
            }
            else dif=ar[j+1]-ar[j];

            if(dif==m-1 || dif==1)
            {
                stu++;
            }
        }

        if(stu==m-1)
        {
            printf("YES\n");
        }
        else printf("NO\n");
    }
}
