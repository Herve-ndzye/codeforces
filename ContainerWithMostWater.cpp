#include  <iostream>
#include <vector>

using namespace std;
int main() {
    string m;
    vector<int> vec;
    getline(cin,m);
    for (char i : m) {
        if (i != '[' && i != ']' && i != ',' ) {
            vec.push_back(i - '0');
        }
    }
    for (int x : vec) {
        cout << x << endl;
    }
    return 0;
}