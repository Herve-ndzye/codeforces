#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<int> p;
    vector<int> w;
    vector<vector<int>> vec;
    int n, c;
    cin >> n >> c;
    for (int i = 0; i < n; i++) {
        int holder;
        cin >> holder;
        p.push_back(holder);
    }
    for (int i = 0; i < n; i++) {
        int holder;
        cin >> holder;
        w.push_back(holder);
    }

    for (int i = 0; i < n + 1; i++) {
        vector<int> holder;
        for (int j = 0; j <= c; j++) {
            if (i == 0 || j == 0) {
                holder.push_back(0);
            }else if (w[j] < j) {
                holder.push_back(vec[i-1][j]);
            }else if (w[j] >= j) {
                int x = max(vec[i-1][j],vec[i-1][j-w[i]] + p[i]);
                holder.push_back(x);
            }
        }
        vec.push_back(holder);
    }

cout << vec[1][3];
    return 0;
}
