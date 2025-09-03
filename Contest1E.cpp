#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int n;
    cin >> n;
int days = ceil(log2(n)) + 1;
cout << days;
    return 0;
}