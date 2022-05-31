#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    string a, b, x, y;
    cin >> x >> y;
    a = x, b = y;
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    a.erase(unique(a.begin(), a.end()), a.end());
    b.erase(unique(b.begin(), b.end()), b.end());
    cout << a.length() << " " << b.length() << endl;
    cout << x.length() << " " << y.length() << endl;
    if (a == b && y < x)
        cout << y;
    else if (a > b)
        cout << y;
    else if(a<b)
        cout << x;
    /*if ((b.length() < a.length()) && (b < a))
        cout << y;
    else if ((b.length() > a.length()) && (b > a))
        cout << x;
    else if ((b.length() == a.length()) && (a == b))
    {
        if (x > y)
            cout << y;
        else
            cout << x;
    }
    else if ((b.length() == a.length()) && (a < b))
        cout
        << x;
    else if ((b.length() == a.length()) && (a > b))
        cout
            << y;
    else if (a > b)
        cout
            << y;
    else
        cout << x;*/
    return 0;
}