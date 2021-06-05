#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000];
    int i,j,flag=0,count=0,k;
    gets(a);
    k=strlen(a);
    for(i=1;i<(k-1);i=i+3)
    {
        flag=0;
        for(j=i+3;j<(k-1);j=j+3)
        {
            if(a[i]==a[j])
            {
                flag=1;
            }
        }
        if(flag==0)
            count++;
    }
    printf("%d",count);
}
