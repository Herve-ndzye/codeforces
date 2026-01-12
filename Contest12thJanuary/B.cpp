//
// Created by HERVE GT IT on 1/12/2026.
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
        int s,k,m;
        cin >> s >> k >> m;
        cout << max(0,min(s,k)-m%k) << endl;
    }
    return 0;
}
