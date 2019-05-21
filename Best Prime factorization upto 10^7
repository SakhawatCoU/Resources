#include<bits/stdc++.h>
#define int long long
#define scf(n) scanf("%lld",&n)
#define rep1(n) for(int i=1;i<=n;i++)
#define prf(n) printf("%lld",n)
#define sci(n) scanf("%lld",&n)
#define pri(n) printf("%lld",n)

#define nl printf("\n")
#define spc printf(" ")
#define file freopen("in.txt","rt",stdin)
#define pii pair<int,int>
#define piii pair<pii,int>
using namespace std;

/*bool sortBySec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}*/
int mark[10000009],prime[10000009],nprime =1;
int limit,n;
void PrimeNumber() /** Seive Method **/
{
    mark[1]=1;
    mark[0] =1;
    prime[nprime++]=2;

    for(int i=4; i<=n; i+=2)
        mark[i]=1;

    for(int i=3; i<=n; i+=2)
    {
        if(!mark[i])
        {
            prime[nprime++]=i;

            if(i<=limit)
            {
                for(int j=i*i; j<=n; j=j+i*2)
                {
                    mark[j]=1;
                }
            }
        }
    }

}
vector<int>v;

void func(int n)
{
    for(int i=1; prime[i]*prime[i]<=n; i++)
    {
        while(n%prime[i]==0)
        {
            v.push_back(prime[i]);
            n/=prime[i];
            if(mark[n]==0)
            {
                v.push_back(n);
                return;
            }

        }
        if(mark[n]==0)
        {
            v.push_back(n);
            return;
        }
    }
    if(n>1)
        v.push_back(n);
}
int32_t main()
{


    n = 10000000;

    limit = sqrt(n+1);
    PrimeNumber();
    while(sci(n)==1)
    {

        v.clear();
        func(n);
        if(n==1LL)
        {
            pri(1LL),nl;
            continue;
        }
        pri(1LL);
        for(auto x : v)
        {

            printf(" x %lld",x);

        }
        nl;

    }


    return 0;

}
