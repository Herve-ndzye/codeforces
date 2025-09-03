#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,cost=0,x = 0;
        cin >> n;
        while(n >= 3){
            int holder =  n%3;
            n/=3;
            cost+=holder*(pow(3,x+1)+(x*(pow(3,x-1))));
            x+=1;
        }
        cost+=n*(pow(3,x+1)+(x*(pow(3,x-1))));
        cout << cost<< endl;
    }
    return 0;
}