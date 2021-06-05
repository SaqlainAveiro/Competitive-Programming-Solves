#include<stdio.h>
#include<string.h>

int main()
{
    char a[100],b;
    int i,j,x,n;
    gets(a);
    x=strlen(a);
    for(i=0;i<x-1;i=i+2)
    {
        for(j=i+2;j<x;j=j+2)
         {
          if(a[i]>a[j])
            {
                b=a[i];
                a[i]=a[j];
                a[j]=b;
            }
         }
    }
    printf(a);
}
