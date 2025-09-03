#include <iostream>
#include <set>

using namespace std;

int main() {
    int n;
    cin >> n;
    set<int> findTheMissing;
    for (int i = 0; i < (n - 1); i++) {
        int holder;
        cin >> holder;
        findTheMissing.insert(holder);
    }
    for (int x = 1; x <= n; x++) {
        auto pos = findTheMissing.find(x);
        if (pos == findTheMissing.end()) {
            cout << x;
            break;
        }
    }

    return 0;
}