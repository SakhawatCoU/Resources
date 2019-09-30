//https://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&category=24&page=show_problem&problem=515
//https://paste.ubuntu.com/p/5qx5WTWD6h/

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
int arr[] = {99999,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31};
int dp[35][1009];
int ans[35][1009];
int a,b;
int func(int pos,int make,vector<int> v)
{

    if(make<0)
        return 0;
    if(make==0)
    {
        for(auto x : v)
        {
            cout<<x<< " ";
        }
        printf("\n");
        return 1;
    }
    if(pos > 31)
        return 0;
    if(dp[pos][make] == 0)
    {
        v.push_back(arr[pos]);
        int a=0,b=0;
        a = func(pos+1, make - arr[pos],v);
        v.pop_back();
        b = func(pos+1, make,v);
        ans[pos][make] =  a + b;
        dp[pos][make] = 1;
    }
    return ans[pos][make];
}

int main()
{
    int i,j;
    for(i=0; i<=32; i++)
    {
        for(j=0; j<=1001; j++)
        {
            dp[i][j] = 0;
            ans[i][j] = 0;
        }
    }
    vector<int>v;
    scanf("%d",&a);
    printf("%d\n",func(1,a,v));

    return 0;
}

