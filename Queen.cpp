#include <iostream>
#include <map>

using namespace std;
int main() {
    int n;
    map<int,int> vec;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int p,c;
        cin >>p >> c;
        vec.insert({p,c});
    }

    return 0;
}