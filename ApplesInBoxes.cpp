#include <bits/stdc++.h>

using namespace std;
int main()
{
    int t;
    cin >> t;
    vector<string> ans;
    for (int c = 0; c < t; c++)
    {
        int n,k;
        vector<int> vec;
        cin >> n >> k;
        for (int m = 0; m < n; m++)
        {
            int g;
            cin >> g;
            vec.push_back(g);
        }
        int count = 0;
        do
        {
            bool choice = false;
            for (int j = 0; j < n; j++)
            {
                vec[n]-=1;
                if (max_element(vec.begin(),vec.end())-min_element(vec.begin(),vec.end())<=k && vec[n] >= 0)
                {
                    choice = true;
                    count++;
                    break;
                }
                vec[n]+=1;
            }
            if (choice == false)
            {
                if (max_element(vec.begin(),vec.end())-min_element(vec.begin(),vec.end())>k)
                {
                    if (count % 2 == 0)
                    {
                        ans.emplace_back("Tom");
                    }
                    if (count % 2 != 0)
                    {
                        ans.emplace_back("Jerry");
                    }
                }else
                {
                    count++;
                    if (count % 2 == 0)
                    {
                        ans.emplace_back("Tom");
                    }
                    if (count % 2 != 0)
                    {
                        ans.emplace_back("Jerry");
                    }
                }
                break;
            }
        }
        while (true);
    }

    for (string m : ans)
    {
        cout << m << endl;
    }
    return 0;
}