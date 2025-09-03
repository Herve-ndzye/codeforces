#include <iostream>
#include <string>

using namespace std;
int main() {
    int n;
    cin >>  n;
    string m;
    cin >> m;
int D = 0;
    int A = 0;

    for (char x : m) {
       if (x == 'D') {
           D+=1;
       } else {
           A+=1;
       }
    }
    if (A > D) {
        cout << "Anton";
    }else if (D > A) {
        cout << "Danik";
    }else {
        cout << "Friendship";
    }
    return 0;
}