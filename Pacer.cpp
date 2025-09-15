#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n,m,count=0;
        cin >> n>> m;
        long long pre = 0;
        int pos = 0;
        for (int i = 0; i < n; i ++)
        {
            long long a,b;
            cin >> a>> b;
            if ((a-pre)%2==0 && pos == b) count+=a-pre;
            if ((a-pre)%2==1 && pos != b) count+=a-pre;
            if ((a-pre)%2==0 && pos != b || (a-pre)%2==1 && pos==b) count+=a-pre-1;
            pre=a;
            pos=b;
        }
        count+= m-pre;
        cout << count<< endl;
    }
    return 0;
}