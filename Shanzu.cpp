#include <iostream>
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if (n >= 4 && n%2==0)
        {
            cout << n/4+1 << endl;
        }else if (n < 4 && n%2==0)
        {
            cout << n/2<<endl;
        }else cout << 0<< endl;
    }
    return 0;
}