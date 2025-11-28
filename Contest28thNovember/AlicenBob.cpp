#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int a,n;
        cin >> n >> a;
        vector<long> vec(n);
        for (int i = 0; i < n ;i ++)
        {
            cin >> vec[i];
        }
        if (a < vec[0])
        {
            cout << vec[0] << endl;
            break;
        }
        if (a > vec[n-1])
        {
            cout << vec[n-1]<< endl;
            break;
        }
        for(int i =0; i< n; i++)
        {
            if (vec[i] <= a && vec[i+1] >= a)
            {
                cout << (vec[i]+vec[i+1])/2 +1<< endl;
                break;
            }
        }
    }
}