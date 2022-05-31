#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, in = 0;
    cin >> n;
    int a[20];
    while (n)
    {
        a[in++] = n % 10;
        n /= 10;
    }
    int j = in - 1;
    bool flag = false;
    for (int i = 0; i < in / 2; i++, j--)
        if (a[i] != a[j])
        {
            flag = true;
            break;
        }
        bool flag2=false;
    for (int i = 0; i < in; i++)
    {
        if(a[i])
    }
        if (a[i] != 0)
            cout << a[i];
    if (flag)
        cout << "\nNO";
    else
        cout << "\nYES";
    return 0;
}