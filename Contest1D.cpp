#include <iostream>
#include <vector>
#include <sstream>
#include <numeric>
#include <deque>

using namespace std;
int main() {
    string m;
    int result;
    vector<string> vec;
    string word;
    getline(cin ,m);
    istringstream iss(m);
    while (iss >> word) {
        vec.push_back(word);
    }
for (string n : vec) {
    result = n[0];
    for (int a : n) {
        result = gcd(result,a);
    }
    cout << result << endl;
    for (int a : n) {
        deque<int> dq;
        a/= result;
        while (a >= 3) {
            dq.push_front(a%3);
            a/=3;
        }
        cout << a%3;
        for (int x : dq) {
           cout << x;
        }
        cout << " ";
    }
    cout << endl;
}

    return 0;
}