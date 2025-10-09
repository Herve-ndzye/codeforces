#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vec;
        for(int i = 0; i < n;i++){
            long long a;
            cin >> a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        long long max_def = 0;
        for(int i = 0;i < n;i+=2){
            if(abs(vec[i]-vec[i+1]) > max_def) max_def= abs(vec[i]-vec[i+1]);
        }
        cout << max_def<< endl;
    }
    return 0;
}