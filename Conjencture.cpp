#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int k,x;
        cin >> k>> x;
        while (k--)
        {
            if (x%2 == 0)
            {
                x*=2;
            }else
            {
                x*=3;
                x+=1;
            }
        }
        cout << x<< endl;
    }
    return 0;
}