#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m = n;
        vector<int> vec;
        while(m--){
            int a;
            cin >> a;
            vec.push_back(a);
        }
        long long  counter0 = count(vec.begin(),vec.end(),0);
        long long counter1= count(vec.begin(),vec.end(),-1);
        if (counter1%2!=0) counter0+=2;
        cout << counter0<< endl;
    }
    return 0;
}