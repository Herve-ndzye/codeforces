#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<long long> sticks(n);
        for (int i = 0; i < n; i++) cin >> sticks[i];

        sort(sticks.rbegin(), sticks.rend());

        long long sum = accumulate(sticks.begin(), sticks.end(), 0LL);
        long long max_side = sticks[0];

        if (max_side >= sum - max_side) {
            cout << 0 << "\n";
        } else {
            cout << sum << "\n";
        }
    }

    return 0;
}
