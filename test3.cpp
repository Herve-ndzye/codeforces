#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n >> k;
        vector<long long> vec(n);
        set<long long> unique;
        long long count_k = 0;
        for(int i = 0; i < n; i++){
            cin >> vec[i];
            unique.insert(vec[i]);
            if(vec[i] == k) count_k++;
        }
        if(k == 0){
            if(unique.count(0)) cout << 1 << endl;
            else cout << 0 << endl;
            continue;
        }
        long long counter = 0;
        for(int i = 0; i < k; i++){
            if(!unique.count(i)) counter++;
        }
        cout << max(counter, count_k) << endl;
    }
    return 0;
}