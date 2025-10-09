#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,m;
        vector<long long> vec;
        cin >> n >> m;
        long long g = m;
        while(g--){
            long long a;
            cin >> a;
            vec.push_back(a);
        }
        long long great = *max(vec.begin(),vec.end());
        if(count(vec.begin(),vec.end(),vec[0]) == 1){
             cout << n-vec[m-1]+vec[0]+1 << endl;
        }else cout << 1<< endl;
    }
    return 0;
}