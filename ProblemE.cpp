#include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<int> eq;
    for (int i = 0; i < 3; i++) {
        int holder;
        cin >> holder;
        eq.push_back(holder);
    }
    for (int i = 0; i < 2; i++) {
        if (i == 0) {
            if (eq[i] + eq[i+1] == eq[2]) {
                cout << eq[i] << "+" << eq[i+1] << "=" << eq[2] << endl;
                break;
            }
            if (eq[i] - eq[i+1] == eq[2]) {
                cout << eq[i] << "-" << eq[i+1] << "=" << eq[2] << endl;
                break;
            }
            if (eq[i] / eq[i+1] == eq[2]) {
                cout << eq[i] << "/" << eq[i+1] << "=" << eq[2] << endl;
                break;
            }
            if (eq[i] * eq[i+1] == eq[2]) {
                cout << eq[i] << "*" << eq[i+1] << "=" << eq[2] << endl;
                break;
            }
        }else {
            if (eq[i] + eq[i+1] == eq[0]) {
                cout << eq[0] << "=" << eq[1] << "+" << eq[2] << endl;
                break;
            }
            if (eq[i] - eq[i+1] == eq[0]) {
                cout << eq[0] << "=" << eq[1] << "-" << eq[2] << endl;
                break;
            }
            if (eq[i] / eq[i+1] == eq[0]) {
                cout << eq[0] << "=" << eq[1] << "/" << eq[2] << endl;
                break;
            }
            if (eq[i] * eq[i+1] == eq[0]) {
                cout << eq[0] << "=" << eq[1] << "*" << eq[2];
                break;
            }
        }
    }

    return 0;
}