#include <iostream>

using namespace std;
int main() {
    int n;
    cin  >> n;
    string m;
    cin >> m;
    int count = 0;
    char x;
    char y;
    for (int j = 0; j < n; j++) {
        int check = 0;
        char a = m[j];
        char b = m[j+1];
        for (int i = 0; i < n; i++) {
            if (m[i] == a && m[i+1] == b) {
                check +=1;
            }
        }
        if (check > count) {
           x = a;
            y = b;
            count = check;
        }
    }
cout << x << y;
    return 0;
}