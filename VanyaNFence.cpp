#include <iostream>
#include <vector>

using namespace std;
int main() {
    int n,h;
    int SumWidth = 0;
    vector<int> vec;
    cin >> n >> h;
    for (int i=0; i<n; i++) {
        int holder;
        cin >> holder;
        vec.push_back(holder);
    }

    for (int x : vec) {
        if ( x > h) {
            SumWidth += 2;
        }else {
            SumWidth+= 1;
        }
    }
    cout << SumWidth;
    return 0;
}