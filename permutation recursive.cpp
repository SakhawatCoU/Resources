#include<bits/stdc++.h>
using namespace std;
vector<int>permutation;

int n;
int check[100];
void Generate()
{
    if(permutation.size()==n)
    {
        for(auto x : permutation)
        {
            cout<<x<<" ";
        }
        printf("\n");
    }
    else
    {
        for(int i=0;i<n;i++)
        {
            cout<<"#   "<<i<<endl;
            if(check[i])
                continue;
            check[i] = true;
            cout<<"first "<<i<<endl;
            permutation.push_back(i);
            Generate();
            cout<<"Second "<<i<<endl;
            check[i] = false;
            permutation.pop_back();
        }
        printf("---------------\n");
    }
}



int main()
{
    n = 3;
    Generate();
    return 0;
}
