#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
     int t;
    vector<vector<char>> vec;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string holder;
        cin >> holder;
        vec.push_back(vector<char>(holder.begin(), holder.end()));
    }
for (auto g : vec) {
    sort(g.begin(),g.end());
    cout << g.front() << endl;
}
    return 0;
}