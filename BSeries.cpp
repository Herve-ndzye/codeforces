#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int x,k;
        cin >> x;
        cin >> k;
        if (k > x)
            cout << ((((k+x-1)/x)+1)/2)+1<< endl;
        else
            cout << 1;
    }
    return 0;
}