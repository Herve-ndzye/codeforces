#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long p;
        long long sum = 0;
        vector<long long> vec;
        cin >> p;
        while(p--){
            long long a;
            cin >> a;
            sum+=a;
            vec.push_back(a);
        }
        long long Every = (sum * 2)/vec.size();
        for(long long b : vec) cout << Every - b<< " ";
        cout << endl;
    }
    return 0;
}