#include <iostream>

using namespace std;
int main() {
    int arr[4] = {25,10,5,1};
    int target = 0;
    cin >> target;
    int count = 0;
    for (int i : arr) {
        int x = target / i;
        int y = i * x;
        target -= y;
        count += x;
    }
    cout << count;
    return 0;
}