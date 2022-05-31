#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n, x = 1;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        
        int j = 3;
        while (j--)
            cout << x++ << " ";
        cout <<"pum"<< endl;
        x++;
    }
    return 0;
}