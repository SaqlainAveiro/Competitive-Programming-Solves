#include<stdio.h>

int main()
{
    int n,i,j,x,count=0;
    scanf("%d",&n);
    char a[n];

    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
    }

    i=1;
    while(i<n)
    {
        if(a[i]==' ')
            i=i+2;
        else
        {
            if(a[i]>='A'&&a[i]<='Z')
            {
                count=count+1;
                i++;
            }
            else if(a[i]>='a'&&a[i]<='z')
                i++;
        }
    }
    if(a[0]>='A'&&a[0]<='Z')
        count=count+1;

    printf("%d",count);
}
