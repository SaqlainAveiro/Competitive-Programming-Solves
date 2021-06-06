#include<stdio.h>
#include<string.h>

int main()
{
    int n,i,j,a1=0,a2=0,a3=0,a4=0,sum=0;
    char ab[10000];
    scanf("%d",&n);
    getchar();
    gets(ab);
    for(i=0;ab[i]!='\0';i++)
    {
        if(ab[i]=='N')
            a1++;
        else if(ab[i]=='S')
            a2++;
        else if(ab[i]=='U')
            a3++;
        else if(ab[i]=='P')
            a4++;
    }
    sum=(a1-1)+(a2-1)+(a3-1)+(a4-1);
    sum=n-sum;
    printf("%d",sum);
}
