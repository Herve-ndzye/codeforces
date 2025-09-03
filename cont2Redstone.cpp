#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        vector<int> vec;
        cin >>n;
        while(n--){
            int a;
            cin >> a;
            vec.push_back(a);
        }
        int s1=vec.size();
        sort(vec.begin(),vec.end());
        vec.erase(unique(vec.begin(),vec.end()),vec.end());
        if(vec.size()!=s1){
            cout << "Yes\n";
            continue;
        }
        cout << "No\n";
    }
    return 0;
}