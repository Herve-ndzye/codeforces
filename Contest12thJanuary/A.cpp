//
// Created by HERVE GT IT on 1/12/2026.
// God help me be in April Camp!
//
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
       if (n < 4)
       {
           cout << n << endl;
       }else if (n%2 == 0){
           cout << 0 << endl;
       }else
           cout << 1<< endl;

    }
    return 0;
}
