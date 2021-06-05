#include<stdio.h>
#include<string.h>

int main()
{
    char a[1000];
    int i,j,count,flag=0;
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        flag=0;
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                flag=1;
            }
        }
        if(flag==0)
            count++;
    }
    if(count%2==0)
        printf("CHAT WITH HER!\n");
    else printf("IGNORE HIM!\n");
    return 0;
}
