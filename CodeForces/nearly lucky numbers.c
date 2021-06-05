#include<stdio.h>
#include<string.h>

long int str[100000];

int main()
{
    int i,j,count=0;
    for(i=0;str[i]>=0;i++)
    {
        str[i]=getchar();
        if(str[i]=='\n')
        {
            str[i]='\0';
            break;
        }
    }
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]=='4'||str[i]=='7')
            count++;
    }
    if(count==4||count==7)
        printf("YES");
    else printf("NO");
}
