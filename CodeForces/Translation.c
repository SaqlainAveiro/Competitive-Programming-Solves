#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k=0,l,count;
    char a[200],b[200],c[200];
    gets(a);
    gets(b);
    l=strlen(a);
    for(i=0,j=l-1;a[i]!='\0';i++,j--)
    {
        if(a[i]!=b[j])
            k=1;
    }
    if(k==0)
        printf("YES");
    else if(k==1)
        printf("NO");
}
