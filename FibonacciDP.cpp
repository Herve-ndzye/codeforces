#include <iostream>
#include <map>

using namespace std;

int fib(int a) {
    static int count = 0;
    static map<int,int> memo = {{0,0},{1,1}};
    for (int i = 2; i <= a; i++) {
        memo[i]=memo[i-1]+memo[i-2];
        count ++;
    }

    return count;
}
int main() {
    cout << fib(7);
    return 0;
}