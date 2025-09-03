#include <iostream>
#include <vector>

using namespace std;
int main()
{
    int  t;
    vector<int> ans;
    cin >> t;
    for (int i =0; i < t;i++)
    {
       int n,score = 0;
        vector<int> vec;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int g;
            cin >> g;
            vec.push_back(g);
        }
        for (int x : vec)
        {
            if (x == 0)
            {
                score +=1;
            }else
            {
                score+=x;
            }
        }
        ans.push_back(score);
    }
for (int y : ans)
{
    cout << y << endl;
}
    return 0;
}
