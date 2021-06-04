/*
Author            : Md. Anwarul Habib ; CSE - 41st Batch , AUST
Problem Name      : UVa-11715-Car
*/

#include<bits/stdc++.h>

using namespace std;

long long int i=1,j,k,l,m,n,b,c,d,total=0;
double s,a,v,t,u,sum=0,x,y,z;

int main()
{
    while(i>0)
    {
        scanf("%lld",&m);
        if(m==0)
        {
            break;
        }
        else
        {
            scanf("%lf %lf %lf",&x,&y,&z);
            if(m==1)
            {
                u=x; v=y; t=z;

                a=(v-u)/t;
                s=u*t+(0.5)*a*t*t;
                printf("Case %lld: %.3f %.3f\n",i,s,a);
            }
            else if(m==2)
            {
                u=x; v=y ; a=z;

                t=(v-u)/a;
                s=u*t+(0.5)*a*t*t;
                printf("Case %lld: %.3f %.3f\n",i,s,t);
            }
            else if(m==3)
            {
                u=x; a=y ; s=z;

                v=sqrt(u*u+2*a*s);
                t=(v-u)/a;
                printf("Case %lld: %.3f %.3f\n",i,v,t);
            }
            else if(m==4)
            {
                v=x; a=y ; s=z;

                u=sqrt(v*v-2*a*s);
                t=(v-u)/a;
                printf("Case %lld: %.3f %.3f\n",i,u,t);
            }
        }
        i++;
    }
}

