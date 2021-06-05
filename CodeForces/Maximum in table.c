//#include<stdio.h>

//int main()
//{
    //int a[50][50],n,i,j,m;
    //scanf("%d",&n);
    //for(i=0;i<n;i++)
    //{
        //for(j=0;j<n;j++)
        //{
            //a[0][j]=1;
            //a[j][0]=1;
            //a[i][j]=a[i-1][j]+a[i][j-1];
        //}
    //}

    //for(i=0;i<n;i++)
    //{
        //for(j=0;j<n;j++)
        //{
            //m=a[i][j];
            //if(a[i][j]>m)
                //m=a[i][j];
        //}
    //}
    //printf("%d",m);
//}
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int ar[100][100],i,j,k,max=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            ar[0][j]=1;
            ar[j][0]=1;
            ar[i][j]=ar[i-1][j]+ar[j][i-1];
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                printf("%d ",ar[i][j]);
        }printf("\n");
    }
    return 0;
}
