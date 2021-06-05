#include<stdio.h>
#include<string.h>

int main()
{
    char a[100];
    int i,j,k,count=0,index=0;
    gets(a);
    strlwr(a);
    for(i=index;a[i]!='\0';)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='y')
        {
            for(j=i;a[j]!='\0';j++)
            {
                a[j]=a[j+1];
            }
            index=i;
        }
        else i++;

    }
    k=strlen(a);
    for(i=0;i<k;i++)
    {
        printf(".%c",a[i]);
    }
}
