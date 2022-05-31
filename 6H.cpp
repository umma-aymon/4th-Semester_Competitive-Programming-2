#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long int
using namespace std;
int main()
{
    ull a, b, x;
    cin >> a >> b;
    x = __gcd(a, b);
    if (b > a)
        swap(a, b);
    cout << x << " " << (a / x) * (b);
    return 0;
}