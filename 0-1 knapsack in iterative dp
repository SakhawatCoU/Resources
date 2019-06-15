//https://www.youtube.com/watch?v=8LusJS5-AGo
//https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
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
#define MOD 10000007
using namespace std;

/*bool sortBySec(const pair<int,int> &a,const pair<int,int> &b)
{
    return (a.second < b.second);
}*/
void faster(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}
/******************************************/
int dp[109][509];
int cost[109];
int weight[109];
int32_t main()
{
    /***********************************/
#ifdef ONPC
    freopen("in.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif

    faster();
    /*********************************/
    int capacity,n;
    int c = 0;
    while(1)
    {
        if(c>0)
            getchar();
        cin>>capacity>>n;
        if(n==0 and capacity==0)
            break;
        c++;
        for(int i=1; i<=n; i++)
        {
            cin>>cost[i]>>weight[i];
        }
        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=capacity; j++)
            {
                if(i==0 || j==0)
                    dp[i][j] = 0;
                else if(j>=cost[i])
                {
                    dp[i][j] = max(weight[i]+dp[i-1][j-cost[i]],dp[i-1][j]);
                }
                else
                {
                    dp[i][j] = dp[i-1][j];
                }
            }
        }


        int c1 = 0;
        for(int j=0; j<=capacity; j++)
        {
            for(int i=0; i<=n; i++)
            {
                if(dp[i][j]==dp[n][capacity])
                {
                    cout<<j<< " ";
                    c1 = 1;
                    break;
                }
            }
            if(c1)
                break;
        }
        cout<<dp[n][capacity]<<endl;


    }

    return 0;
}
