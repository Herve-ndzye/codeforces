#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n,m;
    vector<string> result;
    vector<vector<string>> lists;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        vector<string> list;
       for (int j = 0; j < m; j++) {
           string m;
           cin >> m;
           list.push_back(m);
       }
        lists.push_back(list);
    }
    for (int i = 0; i < m; i++) {
        int  checker = 1;
        for (int j = 1; j < n; j++) {
            if (find(lists[j].begin(),lists[j].end(),lists[0][i]) != lists[j].end()) {
                checker+=1;
            }else {
                break;
            }
        }
        if (checker == n) {
            result.push_back(lists[0][i]);
        }
    }
    sort(result.begin(),result.end());
cout << result.size() << endl;
    for (auto m : result) {
        cout << m << endl;
    }
    return 0;
}