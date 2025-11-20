#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long i;
        cin >> i;
        vector<long long> vec(i);
        for(int j = 0; j < i;j++){
            cin >> vec[j];
        }
        sort(vec.begin(),vec.end());
        vec.erase(unique(vec.begin(),vec.end()),vec.end());
        cout << vec.size()<< endl;
    }
    return 0;
}