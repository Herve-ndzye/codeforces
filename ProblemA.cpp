#include <iostream>

using namespace std;
int main() {
    string a;
    cin >> a;
   int z = a.size();
    int index = z;
    for (int i = z-1; i >= 0; i--) {
        char b = a[i];
        if ( b == '.') {
            break;
        }
        index--;
    }
    for (int j = index  - 1; j < z; j++ ) {
        cout << a[j];
    }
    return 0;
}