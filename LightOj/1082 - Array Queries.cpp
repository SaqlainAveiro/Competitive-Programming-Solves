 #include<bits/stdc++.h>

using namespace std;

typedef long long int lli ;

#define mx 999999

lli ar[mx+1]={0};

lli tree[3*mx+1]={0};

lli i,j,k,l,m,n,t,a,b,c,d=1,x,y,sum=0,total=0,q;

void build(lli node , lli first , lli last)
{
    if(first==last)
    {
        tree[node]=ar[first];
        return;
    }

    lli left=2*node;
    lli right=2*node+1;

    lli mid=(first+last)/2;

    build(left , first , mid);
    build(right , mid+1 , last);

    tree[node]= min(tree[left],tree[right]);
}

lli query(lli node , lli first , lli last , lli i , lli j)
{
    if(last<i || first>j)
    {
        return -1;
    }
    if(first>=i && last<=j)
    {
        return tree[node];
    }

    lli left=2*node;
    lli right=2*node+1;
    lli mid=(first+last)/2;

    lli q1=query(left , first , mid , i , j);

    lli q2=query(right , mid+1 , last , i , j);

    lli ans=0;

    if(q2>=0 && q1==-1 || q1>=0 && q2==-1)
    {
        ans=max(q1,q2);
    }
    else if(q1==0 && q2==0)
    {
        ans=0;
    }
    else if(q1>0 && q2>0)
    {
        ans=min(q1,q2);
    }
    return ans;
}

void update(lli node , lli first , lli last , lli i , lli new_value)
{
    if(last<i || first>i)
    {
        return;
    }
    else if(first>=i && last<=i)
    {
        tree[node]=new_value;
        return;
    }

    lli left=2*node;
    lli right=2*node+1;
    lli mid=(first+last)/2;

    update(left , first , mid , i , new_value);
    update(right , mid+1 , last , i , new_value);

    tree[node]=tree[left] + tree[right];
}



int main()
{
    //freopen("Input.txt","r",stdin);

    scanf("%lld",&t);

    for(lli i=1 ; i<=t ; i++)
    {

        scanf("%lld %lld",&n,&q);

        for(lli j=1 ; j<=n ; j++)
        {
            scanf("%lld",&ar[j]);
        }

        memset(tree,0,3*mx+1);

        build(1,1,n);

        /*cout<<"The tree = \n\n";

        for(lli j=1 ; j<=n+4 ; j++)
        {
            cout<<tree[j]<<" ";
        }

        cout<<"\n";*/

        lli cr[q+1]={0},dr[q+1]={0};

        for(lli j=1 ; j<=q ; j++)
        {
            scanf("%lld %lld",&cr[j],&dr[j]);
        }

        printf("Case %lld:\n",i);

        for(lli j=1 ; j<=q ; j++)
        {
            if(cr[j]==dr[j])
            {
                printf("%lld\n",ar[cr[j]]);
            }
            else
            {
                printf("%lld\n",query(1,1,n,cr[j],dr[j]));
            }
        }
    }
}
