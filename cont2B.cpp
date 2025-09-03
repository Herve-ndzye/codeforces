#include <bits/stdc++.h>

using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        vector<long long> vec;
        cin >> n;
        string m = to_string(n);

        long long starter= pow(10,m.size()-1);
        long long checker = 0;
        int count=0;
        do{
            if (n>10)
            {
                 checker=n/(starter+1);
                if(checker*(starter+1) == n)
                {
                    vec.push_back(checker);
                    count ++;
                }
                starter/=10;
            }else
            {
                vec.push_back(0);
                break;
            }
        }while(starter > 1);
        if (count == 0 && n > 10)
        {
            vec.push_back(0);
        }
         if (count > 0) cout << count<< endl;
        for(long long x : vec) cout << x << " ";
        cout << '\n';
    }
    
    return 0;
}