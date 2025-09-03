#include <iostream>
#include <set>

using namespace std;

int main() {
    set<char>st;
    string m;
     getline(cin,m);

    cin >> m;
    int n=m.size();
    for (int i=0; i<n;i++) {
        if (m[i] != '{' && m[i] != ','  && m[i] != '}' && m[i] != ' ') {
            st.insert(m[i]);
        }
    }
    cout << st.size();

}
