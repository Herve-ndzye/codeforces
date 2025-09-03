#include <bits/stdc++.h>
using namespace std;

long long power(long long base, long long exp) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1) result *= base;
        base *= base;
        exp /= 2;
    }
    return result;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        long long x = 0;
        long long starter = 1;

        while (starter < n) {
            starter *= 3;
            x++;
        }

        if (starter > n) {
            x--;
            starter /= 3;
            long long h = n / starter;
            long long cost = (power(3, x + 1) + x * power(3, x - 1)) * h;
            n -= h * starter;
            cout << cost + n * 3 << "\n";
        } else {
            cout << power(3, x + 1) + x * power(3, x - 1) << "\n";
        }
    }
    return 0;
}
