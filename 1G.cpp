#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n;
    cin >> n;
    if (n & 1)
        cout << ((n + 1) / 2) * n << endl;
    else
        cout << (n / 2) * (n + 1) << endl;
    return 0;
}
