#include <iostream>
#include <algorithm>

using namespace std;
int main() {
    string t ,s;
    cin >> t >> s;
    reverse(t.begin(),t.end());
    if ( t != s) {
        cout << "NO";
        return 0;
    }
    cout << "YES";


    return 0;
}