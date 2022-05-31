#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,mx=-1;
    cin>>n;
    while (n--)
    {
        cin>>x;
        mx=max(x,mx);
    }
    cout<<mx;
    return 0;
}