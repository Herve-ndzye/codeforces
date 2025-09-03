#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a>>b>>c>>d;
        if((a+c == b && b==d) || (b+c==d && d==a) || (a+d == b && b==c) || (b+d == a && a==c)){
            cout << "Yes"<< endl;
            continue;
        }
            cout << "No"<< endl;
    }
}
