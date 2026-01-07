//
// Created by HERVE GT IT on 1/7/2026.
// God help me be in April Camp!
//
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
       if (v[0] == 0 & v[n-1] == 0)
           cout << "Bob" << endl;
        else
            cout << "Alice" << endl;
    }
    return 0;
}