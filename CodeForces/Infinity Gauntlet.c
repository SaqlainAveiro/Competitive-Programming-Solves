#include<stdio.h>

int main()
{
    int n,i,j,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0;
    char a[6][100];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",&a[i][0]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i][0]=='p')
            s1=s1+1;
        else if(a[i][0]=='g')
            s2=s2+1;
        else if(a[i][0]=='b')
            s3=s3+1;
        else if(a[i][0]=='o')
            s4=s4+1;
        else if(a[i][0]=='r')
            s5=s5+1;
        else if(a[i][0]=='y')
            s6=s6+1;
    }
    printf("%d\n",6-n);
    for(i=0;i<(6-n);i++)
    {
        if(s1==0)
        {
            printf("Power\n");
            s1=1;
        }
        else if(s2==0)
        {
            printf("Time\n");
            s2=1;
        }
        else if(s3==0)
        {
            printf("Space\n");
            s3=1;
        }
        else if(s4==0)
        {
            printf("Soul\n");
            s4=1;
        }
        else if(s5==0)
        {
            printf("Reality\n");
            s5=1;
        }
        else if(s6==0)
        {
            printf("Mind\n");
            s6=1;
        }
    }
}
