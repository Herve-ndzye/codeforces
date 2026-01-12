//
// Created by HERVE GT IT on 1/11/2026.
// God help me be in April Camp!
//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t ;
    while(t--)
    {
        int n;
        cin >> n ;
        vector<int> v(n);
        for(int i=0;i<n;i++)
            cin >> v[i];
        vector<int> u;
        unordered_set<int> seen;

        for (int x : v)
            if (seen.insert(x).second)
                u.push_back(x);

        v.swap(u);

        cout << v[(1000000000000000000LL - n) % v.size()] << endl;
    }
}