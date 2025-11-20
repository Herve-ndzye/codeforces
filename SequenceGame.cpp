#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,x;
        cin >> n;
        vector<int> vec;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            vec.push_back(a);
        }
        cin >> x;
        sort(vec.begin(),vec.end());
        if (x >= vec[0] && x <= vec[n-1]) cout << "YES\n";
        else cout << "NO\n";
    }
}