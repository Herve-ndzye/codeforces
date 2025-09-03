#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int n;
    string m = "YES";
    vector<string> vec;
    cin >> n;
    for (int i=0; i< n; i++) {
        string b;
        cin >> b;
        for (char& j : b) {
            j= toupper(j);
        }
        if (b == m) {
            vec.push_back("YES");
        }else {
            vec.push_back("NO");
        }
    }
    for (string x : vec) {
        cout << x << endl;
    }

    return 0;
}