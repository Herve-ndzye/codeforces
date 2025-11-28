#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n > 2)
            if ( pow(n,2)-1+(pow(n,2)-2)+pow(n,2)-1-n+pow(n,2)
                > pow(n,2)-1+pow(n,2)-2-n+pow(n,2)-n+pow(n,2)-1-n+pow(n,2)-1-2*n)
                cout << pow(n,2)-1+(pow(n,2)-2)+pow(n,2)-1-n+pow(n,2)<< endl;
            else
               cout <<  pow(n,2)-1+pow(n,2)-2-n+pow(n,2)-n+pow(n,2)-1-n+pow(n,2)-1-2*n<<endl;
        else if (n==1)
            cout << 1<<endl;
        else if (n==2)
            cout << 9<< endl;
    }
    return 0;
}