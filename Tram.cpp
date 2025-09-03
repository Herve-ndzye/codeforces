#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n, max = 0,current = 0 ;
    cin >> n;
    vector<vector<int>> stops;
    for (int i =0; i<n; i++) {
        vector<int> holder;
        int a,b;
        cin >> a >> b;
        holder.push_back(a);
        holder.push_back(b);
        stops.push_back(holder);
    }
    for (int i = 0; i < n; i++) {
        current += stops[i][1]-stops[i][0];
        if (current > max) {
            max = current;
        }
    }

    cout << max;
    return 0;
}