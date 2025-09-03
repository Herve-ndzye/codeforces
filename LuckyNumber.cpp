#include <iostream>
#include <string>
using namespace std;

int main() {
    long long n;
    cin >> n;
    string m = to_string(n);
    int frequency = 0;
    for (char x : m) {
        if ( x == '4' || x == '7') {
            frequency ++;
        }
    }
    string f=to_string(frequency);
    for ( char y : f) {
        if ( y != '4' && y != '7') {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";

    return 0;
}