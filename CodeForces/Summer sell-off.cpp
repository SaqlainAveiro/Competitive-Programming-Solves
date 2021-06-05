#include<bits/stdc++.h>

using namespace std;

typedef long long int lli;

lli i,j,k,l,m,n,t,a,b,c,d,x,y,p,q,f,sum=0,total=0,s1=0,s2=0;

#define read(in) freopen("Input.txt","r",stdin)

int main()
{
    //read(in);

    cin>>n>>f;

    vector< pair<lli,lli> >vec,ans;

    lli ret[n]={0},let[n]={0};

    for(i=0 ; i<n ; i++)
    {
        /*cin>>x>>y;
        b=min(x,y);
        s1 += b;
        if(y>0 && x<y && f>0)
        {
            vec.push_back(make_pair(y,x));
            s1 -= b;
        }*/
        cin>>ret[i]>>let[i];
        vec.push_back(make_pair( (min(2*ret[i],let[i]) - min(ret[i],let[i])) , i ));
    }

    sort(vec.rbegin(),vec.rend());
    for(i=0 ; i<f ; i++)
    {
        x=vec[i].second;
        s1 += min(2*ret[x],let[x]);
    }
    for(i=f ; i<n ; i++)
    {
        x=vec[i].second;
        s1 += min(ret[x],let[x]);
    }

    /*if(f>0 && vec.size()>0)
    {
        sort(vec.begin(),vec.end());

        p=q=0;

        for(i=vec.size()-1 ; i>=0 ; i--)
        {
            p=vec[i].second*2;

            p=min(p,vec[i].first);

            ans.push_back(make_pair(p,vec[i].second));

            p=0;
        }

        sort(ans.begin(),ans.end());

        if(ans.size()<=f)
        {
            for(i=ans.size()-1 ; i>=0 ; i--)
            {
                 s1+=(ans[i].first);
            }
        }
        else if(ans.size()>f)
        {
            lli len=ans.size()-f;

            for(i=ans.size()-1 ; i>=len ; i--)
            {
                s1+=(ans[i].first);
            }
            for(i=len-1 ; i>=0 ; i--)
            {
                s1+=(ans[i].second);
            }
        }
    }*/
    cout<<s1<<"\n";
}
