#include <iostream>
#include <vector>

using namespace std;
int main() {
    string m;
    vector<char> c;
    cin >> m;

    for (char& a : m) {
        if (a == '<') {
            c.pop_back();
        }else {
            c.push_back(a);
        }
    }
    for (char b : c) {
        cout << b;
    }

    return 0;
}