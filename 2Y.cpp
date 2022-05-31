#include <bits/stdc++.h>
#define ll long long
using namespace std;
/*void fib(int n, int a, int f, int s)
{
    if (n > 1)
    {

        cout << a << " ";
        fib(n - 1, 0, f, s);
    }
    else
        return;
}*/
int main()
{
    int n,a=0,f=0,s=1;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        if(i<=1)
            a=i;
        else
            a = f + s, f = s, s = a;
        cout<<a<<" ";
    }
    return 0;
}
