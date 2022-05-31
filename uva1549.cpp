#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll r;
    while (scanf("%lld",&r)==1)
    {
        ll ans = 1, y = r, r2 = r * r;
        for (ll i = 1; i <= r; i++)
        {
            while (i * i + y * y > r2)
                y--;
            ans += 4 * (y + 1);
        }
        printf("%lld\n%lld\n",r,ans);
    }
    return 0;
}
