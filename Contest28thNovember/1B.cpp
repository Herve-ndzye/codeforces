#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> vec(n);
        for(int i =0; i < n;i++){
            cin >> vec[i];
        }
        sort(vec.begin(),vec.end());
        if (vec.size() == 1 && vec[0]==0)
            cout << 1<< endl;
        else
        {
            vec.erase(remove(vec.begin(),vec.end(),0),vec.end());
            cout << min(vec[n-1],static_cast<int>(vec.size()))<< endl;
        }
    }
    return 0;
}