#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n <= 9)
            cout << n << endl;
        else
        {
            while (n)
            {
                cout << n % 10 << " ";
                n = n / 10;
            }
            cout << endl;
        }
        /*reverse(n.begin(),n.end());
        for (int i = 0; i < n.length(); i++)
            cout << n[i] << " ";*/
    }
    return 0;
}