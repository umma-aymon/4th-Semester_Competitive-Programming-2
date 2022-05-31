#include <bits/stdc++.h>
#define ll long long
using namespace std;
unsigned long long a, b, q;
unsigned long long f(unsigned long long q)
{
    if (q == 1)
        return a;
    else if (q == 2)
        return b;
    else
        return f(q - 1) ^ f(q - 2);
}
int main()
{
    cin >> a >> b >> q;
    cout << f(q);
    return 0;
}