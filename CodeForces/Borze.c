#include<stdio.h>
#include<string.h>

int main()
{
    char a[200];
    int i,j,sum=0;
    gets(a);
    for(i=0;a[i]!='\0';)
    {
        if(a[i]=='.')
            {
                printf("0");
                i++;
            }
        else if(a[i]=='-'&&a[i+1]=='.')
            {
                printf("1");
                i=i+2;
            }
        else if(a[i]=='-'&&a[i+1]=='-')
            {
                printf("2");
                i=i+2;
            }
    }
}
