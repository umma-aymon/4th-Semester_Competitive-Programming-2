#include <bits/stdc++.h>
using namespace std;

void printKMax(int arr[], int n, int k)
{
    int j, mx=0;
    for (int i = 0; i <= n - k; i++)
    {
        mx = arr[i];
        for (j = 1; j < k; j++)
            mx = max(mx,arr[i + j]);
        cout << mx << " ";
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        for(int i=0; i<n; i++)
            cout<<arr[i]<<" ";
        for( int k = 2; k<=n; k++)
            printKMax(arr, n, k);
        cout<<endl;
    }
    return 0;
}
