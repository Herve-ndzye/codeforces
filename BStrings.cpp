#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int cnt = count(s.begin(),s.end(),s[n-1]);
        cout << n-cnt<< endl;
    }
    return 0;
}