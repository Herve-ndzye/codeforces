#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >>n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n;i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n;i++)
        {
            cin >> b[i];
        }
        int m =0;
        int k =0;
        while (m < n)
        {
            k=max(k-a[m],b[m]-k);
            m++;
        }
        cout << k<<endl;
    }
    return 0;
}