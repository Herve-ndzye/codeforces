#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,m,sum=0;
        vector<long long> vec;
        cin >> n>> m;
        long long j = n;
        while(n--){
            long long a;
            cin >> a;
            vec.push_back(a);
        }
        sort(vec.begin(),vec.end());
        while(j-- && m > 0){
            sum+=m*vec[j];
            m--;
        }
        cout << sum<< endl;
    }

    return 0;
}