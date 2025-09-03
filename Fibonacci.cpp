#include <iostream>

using namespace std;

int fib(int a) {
    static int count = 0;
    if (a == 1 || a == 0) {
        count ++;
         return a;
    }else {
        count++;
        fib(a-1) + fib(a-2);
    }
    return count;
}
int main() {
    cout << fib(7);
    return 0;
}