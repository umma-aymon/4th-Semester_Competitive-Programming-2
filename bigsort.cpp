#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int,string> >number;
    long long int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        string s;
        cin>>s;
        int len=s.size();
        number.push_back(make_pair(len,s));
    }
    sort(begin(number),end(number));
    for(auto el:number)
        cout<<el.second<<endl;
    return 0;
}
