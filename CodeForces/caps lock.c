#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i,j,k=0,m=0,c=0,sum;
    gets(a);
    c=strlen(a);
    //printf("\nLength : %d\n",c);
    if(a[0]>=65&&a[0]<=90)
        m=1;
    for(i=1;a[i]!='\0';i++)
    {
        if(a[i]>=65&&a[i]<=90)
            k=k+1;
    }
    //printf("\n%d ta capital\n\n",k);

    if(k==(c-1)&&a[0]>=97&&a[0]<=122)
    {
        a[0]=a[0]-32;
        for(i=1;a[i]!='\0';i++)
            {
                if(a[i]>=65&&a[i]<=90)
                {
                    a[i]=a[i]+32;
                }
            }
        printf("%s",a);
    }
    else if(k+m==c)
    {
        for(i=0;a[i]!='\0';i++)
            {
                if(a[i]>=65&&a[i]<=90)
                {
                    a[i]=a[i]+32;
                }
            }
        printf("%s",a);
    }
    else if(k<c-1)
        printf(a);
}
