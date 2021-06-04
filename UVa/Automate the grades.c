#include<stdio.h>

int main()
{
    float t1,t2,f,a,ct1,ct2,ct3,gct,sum=0;
    int i,t,num=0;
    scanf("%d",&t);
    for(i=1;i<=t;i++)
    {
        scanf("%f %f %f %f %f %f %f",&t1,&t2,&f,&a,&ct1,&ct2,&ct3);
        sum=sum+t1+t2+f+a;
        if(ct1>=ct2&&ct1>=ct3&&ct2>=ct3||ct1>=ct2&&ct1>=ct3&&ct3>=ct2)
        {
            gct=(ct1+ct2)/2;
            sum=sum+gct;
            num=sum;
            if(num>=90)
            {
                printf("Case %d: A\n",i);
            }
            else if(num>=80&&num<90)
            {
                printf("Case %d: B\n",i);
            }
            else if(num>=70&&num<80)
            {
                printf("Case %d: C\n",i);
            }
            else if(num>=60&&num<70)
            {
                printf("Case %d: D\n",i);
            }
            else if(num<60)
            {
                printf("Case %d: F\n",i);
            }
        }
        else if(ct2>=ct1&&ct3>=ct1&&ct2>=ct3||ct2>=ct1&&ct1>=ct3&&ct2>=ct3)
        {
            gct=(ct2+ct3)/2;
            sum=sum+gct;
            num=sum;
            if(num>=90)
            {
                printf("Case %d: A\n",i);
            }
            else if(num>=80&&num<90)
            {
                printf("Case %d: B\n",i);
            }
            else if(num>=70&&num<80)
            {
                printf("Case %d: C\n",i);
            }
            else if(num>=60&&num<70)
            {
                printf("Case %d: D\n",i);
            }
            else if(num<60)
            {
                printf("Case %d: F\n",i);
            }
        }
        else if(ct3>=ct1&&ct3>=ct2&&ct1>=ct2||ct3>=ct1&&ct3>=ct2&&ct2>=ct1)
        {
            gct=(ct1+ct3)/2;
            sum=sum+gct;
            num=sum;
            if(num>=90)
            {
                printf("Case %d: A\n",i);
            }
            else if(num>=80&&num<90)
            {
                printf("Case %d: B\n",i);
            }
            else if(num>=70&&num<80)
            {
                printf("Case %d: C\n",i);
            }
            else if(num>=60&&num<70)
            {
                printf("Case %d: D\n",i);
            }
            else if(num<60)
            {
                printf("Case %d: F\n",i);
            }
        }
        else if(ct1==ct2&&ct1==ct3)
        {
            gct=(ct1+ct2)/2;
            sum=sum+gct;
            num=sum;
            if(num>=90)
            {
                printf("Case %d: A\n",i);
            }
            else if(num>=80&&num<90)
            {
                printf("Case %d: B\n",i);
            }
            else if(num>=70&&num<80)
            {
                printf("Case %d: C\n",i);
            }
            else if(num>=60&&num<70)
            {
                printf("Case %d: D\n",i);
            }
            else if(num<60)
            {
                printf("Case %d: F\n",i);
            }
        }
        sum=0;
        gct=0;
        num=0;
        }
}
