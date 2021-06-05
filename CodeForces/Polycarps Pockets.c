#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,max=0,count=1,t;
    scanf("%d",&t);
    int b[t],a[t];
    for(i=0;i<t;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<t;i++)
    {
        for(j=i+1;j<t;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        b[i]=count;
        count=1;
    }
    max=b[0];
    for(i=1;i<t;i++)
    {
        if(b[i]>max)
            max=b[i];
    }
    printf("%d",max);

}
