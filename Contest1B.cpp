#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int G,N;
    vector<vector<int>> swaps;
    vector<int> checker = {0,1,0};
    cin >> G >> N;
    for (int i = 0; i < N; i++) {
        vector<int> holder;
        int n,m;
        cin >> n >> m;
        holder.push_back(n);
        holder.push_back(m);
        swaps.push_back(holder);
    }
    for ( auto m : swaps) {
        int temp = checker[m[0]-1];
        checker[m[0]-1]= checker[m[1]-1];
        checker[m[1]-1] = temp;
    }
    int index = find(checker.begin(),checker.end(),1) - checker.begin();

    if (index +1 != G) {
        cout << G << " " << index+1;
    }else {
        for (int i = 0; i < 3; i++) {
            if (checker[i] != 1) {
                cout << i+1 << " ";
            }
        }
    }
    return 0;
}