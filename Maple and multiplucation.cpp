#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int  a,b;
        cin >> a>> b;
        if(a<b)swap(a,b);
        if(a%b == 0 && a!=b) cout << 1<< endl;
        else if(a%b != 0 && a!=b) cout << 2<< endl;
        else cout << 0<< endl;
    }

    return 0;
}