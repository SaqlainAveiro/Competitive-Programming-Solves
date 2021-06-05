#include<stdio.h>
#include<string.h>

int main()
{
    int n,sum,i,count=0;
    char a[100];
    scanf("%d",&n);
    getchar();
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]=='8')
            count=count+1;
    }
    sum=n/11;
    if(sum==count)
    {
        printf("%d",sum);
    }
    else if(count>sum)
    {
        printf("%d",sum);
    }
    else if(sum>count)
    {
        printf("%d",count);
    }
    else if(count==0)
    {
        printf("0");
    }
}
