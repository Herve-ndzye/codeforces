#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long a,b,c,d;
        cin >> a>> b>> c>> d;
        if (min(a,c) < min(b,d)) cout << "Flower\n";
        else cout << "Gellyfish\n";
    }
    return 0;
}