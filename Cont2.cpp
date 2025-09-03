#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        deque<char> a;
        string hold;
        cin >> n>> hold;
        for (char y : hold)
        {
           a.push_back(y);
        }
        int m;
        string b;
        cin >>m>> b;
        string c;
        cin >> c;
        for(int i = 0; i < b.size(); i++){
            char x = c[i];
            if(x=='D') a.push_back(b[i]);
            if(x == 'V')a.push_front(b[i]);
        }
        for(char x : a) cout << x;
        cout << endl;
    }

    return 0;
}