/*
Author            : Md. Anwarul Habib
Dept. & Institute : CSE - 41st Batch , Ahsanullah University of Science & Technology
Problem Name      : Uva-10370 - Above Average
*/

#include<bits/stdc++.h>

using namespace std;

long long int i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0;


int main()
{
    scanf("%lld",&t);

    for(i=1;i<=t;i++)
    {
        scanf("%lld",&n);

        double grade_avg=0,stu_percetage=0,total=0;

        double ar[n];

        char x='%';

        for(j=0;j<n;j++)
        {
            scanf("%lf",&ar[j]);
            stu_percetage+=ar[j];
        }
        stu_percetage/=n;

        //printf("Above average marks = %.3lf\n",stu_percetage);

        for(j=0;j<n;j++)
        {
            if(stu_percetage<ar[j])
            {
                total++;
            }
        }

        //printf("Number Students got above average marks = %f\n",total);

        grade_avg=(total/n)*100.000;

        printf("%.3lf%c\n",grade_avg,x);

    }
}
