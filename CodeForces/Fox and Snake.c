#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,n,m,k=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i%2==0)
               printf("#");
            else if(i%2!=0)
            {
                if(k%2==0)
                {
                    if(j==(m-1))
                    {
                       printf("#");
                    }
                    else
                    {
                       printf(".");
                    }
                }
                else
                {
                    if(j==0)
                        printf("#");
                    else printf(".");
                }
            }
        }
        if(i%2!=0)
            k++;
        printf("\n");
    }
}

