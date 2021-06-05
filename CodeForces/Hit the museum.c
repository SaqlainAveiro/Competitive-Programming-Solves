#include<stdio.h>

int main()
{
    int n,i,count,m,p,k,l,g,h,r,s,q;
    scanf("%d",&n);
    //for(i=1;i>0;i++)
    //{
        m=n/100;
        p=n%100;
        if(p==0)
            {
                count=count+m;
                break;
            }

        else if(p>0)
        {
            count=count+m;
            k=p/20;
            l=p%20;
            if(l==0)
            {
                count=count+k;
                break;
            }
            else if(l>0)
            {
                count=count+k;
                g=l/10;
                h=l%10;
                if(h==0)
                {
                   count=count+g;
                   break;
                }
                else if(h>0)
                {
                    count=count+g;
                    r=h/5;
                    q=h%5;
                    if(q==0)
                    {
                        count=count+r;
                        break;
                    }
                    else if(q>0)
                    {
                        count=count+r;
                        s=q/1;
                        count=count+s;
                        break;
                    }
                }
            }
        }
    printf("%d",count);
}

