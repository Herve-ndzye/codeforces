/*Let God know your plans and you will achieve them!*/
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,k;
        cin >> n>> k;
        vector<long long> vec(n),freq(n+1,0);
        for(int i = 0; i < n; i++){
            cin >> vec[i];
            freq[vec[i]]++;
        }
        long long count = 0;
        for(int i = 0; i < k;i++){
            if(freq[i]==0) count++;
        }
        cout << max(count,freq[k])<< endl;
    }
    return 0;
}