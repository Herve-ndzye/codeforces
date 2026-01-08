//
// Created by HERVE GT IT on 1/7/2026.
// God help me be in April Camp!
//
#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int l,a,b;
        cin >> l >> a >> b;
        int first = a;
        int max = first;
        int current = (first+b)%l;
        while(current != first){
            if (current > max)
                max = current;
            current=(current+b)%l;
        }
        cout << max<< endl;
    }
    return 0;
}