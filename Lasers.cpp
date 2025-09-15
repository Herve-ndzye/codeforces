#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n,m,x,y;
        cin >> n>> m>> x>> y;
        long long county = 0 ;
        long long countx = 0;
        vector<long long> ns;
        vector<long long> ms;
        while(n--){
            long long a;
            cin >> a;
            if(a < y) county +=1;
            ns.push_back(a);
        }
        while(m--){
            long long a;
            cin >> a;
            if(a < x) countx+=1;
            ms.push_back(a);
        }
        cout << county+countx << endl;
    }
    return 0;
}