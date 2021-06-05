#include<stdio.h>

int main()
{
    int a[2][3],i,j,n,x,y,m,p,count=0,bount=0;
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    scanf("%d",&n);

    count=a[0][0]+a[0][1]+a[0][2];

    bount=a[1][0]+a[1][1]+a[1][2];

    if(count<=5&&bount<=10&&count>0&&bount>0)
    {
        count=1;
        bount=1;
    }
    else if(count<=5&&bount==0&&count>0)
    {
        count=1;
        bount=0;
    }
    else if(bount<=10&&bount>0&&count==0)
    {
        bount=1;
        count=0;
    }
    else if(count>5&&bount<=10&&bount>0)
    {
        bount=1;
        x=count/5;
        y=count%5;
        if(y>0)
          count=x+1;
        else if(y==0)
          count=x;
    }
    else if(bount>10&&count<=5&&count>0)
    {
        count=1;
        m=bount/10;
        p=bount%10;
        if(p>0)
            bount=m+1;
        else if(p==0)
            bount=m;
    }
    else if(bount>10&&count>5)
    {
        x=count/5;
        y=count%5;
        if(y>0)
          {count=x+1;}
        else if(y==0)
          {count=x;}

        m=bount/10;
        p=bount%10;
        if(p>0)
            {bount=m+1;}
        else if(p==0)
            {bount=m;}
    }

    if((count+bount)>n)
        printf("NO\n");
    else if(n>=(count+bount))
        printf("YES\n");
    else if(n==(count+bount)&&bount>0&&count>0)
        printf("YES\n");
}
