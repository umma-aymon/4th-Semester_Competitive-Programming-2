#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll a, b, x, y;
    cin >> a >> b >> x;
    if (a > b)
        swap(a, b);
    ll n = (b / x) - (a - 1) / x;
    ll first = a - (a % x);
    ll last = b - (b % x);
    if (first < a)
        first += x;
    if (last > b)
        last -= x;
    cout << n * (first + last) / 2;
    return 0;
}