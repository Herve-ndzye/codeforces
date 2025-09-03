#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<int> ans;
    while (t--)
    {
        int n,s;
        vector<int> vec;
        cin >> n>>s;
        int m  = n;
        while (m--)
        {
            int g;
            cin >> g;
           vec.push_back(g);
        }
        int steps = 0;
        if (vec[n-1] <= s)
        {
            steps=s-vec[0];
            ans.push_back(steps);
            continue;
        }
        if (s<=vec[0])
        {
            steps=vec[n-1]-s;
            ans.push_back(steps);
            continue;
        }
        if (vec[n-1] > s && s>vec[0])
        {
            int dist1,dist2;
            dist1= s-vec[0];
            dist2=vec[n-1]-s;
            if (dist1 >= dist2)
            {
                steps=dist2*2;
                steps+=dist1;
                ans.push_back(steps);
                continue;
            }
            if (dist1 < dist2)
            {
                steps=dist1*2;
                steps+=dist2;
                ans.push_back(steps);
                continue;
            }
        }
        ans.push_back(steps);
    }
    for (int x : ans) cout << x<< endl;
    return 0;
}