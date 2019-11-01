#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<string>v;
    int n;
   cin>>n;
    string str;

    for(int i=1;i<=n;i++)
    {
        cin>>str;
        v.push_back(str);
    }
    vector<string>res;
    res.push_back("");
    for(auto arrayValue : v)
    {
        vector<string>temp;
        for(auto x : res)
        {
            for(auto y : arrayValue)
            {
                temp.push_back(x+y);
            }
        }
        res = temp;
    }
    for(auto x : res)
    {
        cout<<x<< " ";
    }
    printf("\n");


    return 0;
}
