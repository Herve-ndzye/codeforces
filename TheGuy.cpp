#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cin >> n;
    vector<int> vec;
    int p;
    cin >> p;
    while (p--)
    {
        int a;
        cin >> a;
        vec.push_back(a);
    }
    int q;
    cin >> q;
    while (q--)
    {
        int b;
        cin >> b;
        vec.push_back(b);
    }
    sort(vec.begin(),vec.end());
    vec.erase(unique(vec.begin(),vec.end()),vec.end());
    if (vec.size()== n) cout << "I become the guy.";
    else cout << "Oh, my keyboard";
    return 0;
}