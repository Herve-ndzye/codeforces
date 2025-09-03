#include <iostream>
#include <set>
#include <string>
using namespace std;

int main() {
    int y;
    string year;
    cin >> y;
    set<char>st;

    while (st.size() != 4) {
        st = {};
        y++;
        year= to_string(y);
        for (int i=0;i<4;i++) {
            st.insert(year[i]);
        }
    }
cout << y;
    return 0;
}