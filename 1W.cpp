#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int a, b, c;
    char s, q;
    cin >> a >> s >> b >> q >> c;
    if ((s == '+' && a + b == c) || (s == '-' && a - b == c) || (s == '*' && a * b == c))
        cout << "Yes";
    else
    {
        if (s == '+')
            c = a + b;
        else if (s == '-')
            c = a - b;
        else
            c = a * b;
        cout << c;
    }
    return 0;
}