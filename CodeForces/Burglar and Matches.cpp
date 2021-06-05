#include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,sum=0,total=0,num=0;

int main()
{
    ios_base :: sync_with_stdio(false);
    cin.tie(0);

    //freopen("Input.txt","r",stdin);

    cin>>n>>m;

    vector < pair<lli,lli> > vec;

    for(i=0 ; i<m ; i++)
    {
        cin>>x>>y;
        vec.push_back(make_pair(y,x));
    }

    sort(vec.begin() , vec.end());

    sum=num=total=0;

    for(i=m-1 ; i>=0 ; i--)
    {
        num += vec[i].second;

        if(num <= n)
        {
            sum += (vec[i].first * vec[i].second );
        }
        else if(num > n)
        {
            num -= vec[i].second;

            if(num==n)
            {
                break;
            }

            a=vec[i].second;

            for(j=1 ; j<=a ; j++)
            {
                sum += (vec[i].first);

                num ++;

                if(num==n)
                {
                    num=-5;
                    break;
                }
            }

            if(num==-5)
            {
                break;
            }
        }
    }
    cout<<sum<<"\n";
}

