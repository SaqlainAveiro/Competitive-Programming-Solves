#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>n>>l;

    lli ar[n]={0};
    double dif=INT_MIN;

    for(i=0 ; i<n ; i++)
    {
        cin>>ar[i];
    }

    sort(ar,ar+n);


    for(i=0; i<n ; i++)
    {
        dif=max(dif , (double)(ar[i]-ar[i-1]));
    }
    dif=max(dif , (double)2*ar[0]);
    dif=max(dif , (double)2*abs(ar[n-1]-l));

    printf("%.10f\n",dif/2);
}
