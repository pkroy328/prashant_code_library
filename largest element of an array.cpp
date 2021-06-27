#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int>v;
    int n;
    cin>>n;
    int a;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    
        cout<<v[n-1]<<" ";
    return 0;
}
