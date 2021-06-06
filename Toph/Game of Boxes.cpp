#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0;

int main()
{
    //freopen("Input.txt","r",stdin);

    cin>>t;

    for(i=1 ; i<=t ; i++)
    {
        cin>>n;

        lli ar[n][3],maxL=0,maxH=0,maxW=0,h=0,l=0,w=0;

        for(j=0 ; j<n ; j++)
        {
            for(k=0 ; k<3 ; k++)
            {
                cin>>ar[j][k];
            }
        }

        maxH=ar[0][0];
        maxL=ar[0][1];
        maxW=ar[0][2];


        for(j=0 ; j<n ; j++)
        {
            h=h+ar[j][0];
            l=l+ar[j][1];
            w=w+ar[j][2];

            for(k=0 ; k<3 ; k++)
            {

                    if(maxH < ar[j][0])
                    {
                        maxH=ar[j][0];
                    }
                    if(maxL < ar[j][1])
                    {
                        maxL=ar[j][1];
                    }
                    if(maxW < ar[j][2])
                    {
                        maxW=ar[j][2];
                    }

            }
        }

        //cout<<"Max H : "<<maxH<<" Max L : "<<maxL<<" Max W : "<<maxW<<"\n\n";
        //cout<<"Total H : "<<h<<" Total L : "<<l<<" Total W : "<<w<<"\n\n\n";

        lli cr[3]={0};

        cr[0]=h*maxL*maxW;
        cr[1]=maxH*l*maxW;
        cr[2]=maxH*maxL*w;

        sort(cr,cr+3);

        cout<<cr[0]<<"\n";

    }

}
