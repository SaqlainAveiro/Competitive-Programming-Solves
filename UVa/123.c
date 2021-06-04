#include<stdio.h>
#include<string.h>

int main()
{
    char s[10];
    int i,t,l;
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++)
    {
        gets(s);
        l=strlen(s);
        if(s[0]=='o'&&s[2]=='e'||s[0]=='o'&&s[1]=='n'||s[1]=='n'&&s[2]=='e')
            printf("1\n");
        else if(s[0]=='t'&&s[1]=='w'||s[0]=='t'&&s[2]=='o'||s[1]=='w'&&s[2]=='o')
            printf("2\n");
        else if(l==5)
            printf("3\n");
    }
}
