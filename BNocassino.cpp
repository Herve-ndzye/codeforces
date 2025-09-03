#include <iostream>
#include <vector>

using namespace std;
int main() {
    int t;
    vector<vector<int>> vec;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int n, k;
        vector<int> row;
        cin >> n >> k;
        for (int j = 0; j < n; j++) {
            int h;
            cin >> h;
            row.push_back(h);
        }
        vec.push_back(row);
    }


    return 0;
}