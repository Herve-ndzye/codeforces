#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int n, d, m, income = 0, expenses ;
    vector<int> a;
    cin >> n >> d;
  for (int i = 0; i < n; i++) {
      int holder;
      cin >> holder;
      a.push_back(holder);
  }
    cin >> m;
    sort(a.begin(),a.end(),greater<int>());
    while ( m > 0 && n > 0) {
        income += a.back();
        a.pop_back();
        n--;
        m--;
    }
    expenses = m * d;
    int profit = income - expenses;

    cout << profit;
}