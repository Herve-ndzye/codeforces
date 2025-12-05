#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n,k;
        cin >> n>> k;
        string vec;
        cin >> vec;
        int m =0;
        int count = 0;
        int until =-1;
        while (m < n)
        {
            if (vec[m] == '0' && m > until)
            {
                count++;
            }
            if (vec[m] == '1'){
                until=m+k;
            }
            m++;
        }
        cout << count<< endl;
    }
    return 0;
}