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
        int n,k;
        cin >> n >> k;

        vector<int> v(n);
        for(int i=0;i<n;i++)
        {
            cin >> v[i];
        }
        sort(v.begin(),v.end());
        for (int i = 0 ; i < k ; i++)
        {
            if (v[i]!= i)
            {
                cout << i<< endl;
                break;
            }
        }
    }

    return 0;
}
