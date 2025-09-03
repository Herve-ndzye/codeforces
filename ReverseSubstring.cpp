#include <iostream>

using namespace std;
int main()
{
    int n;
    string m;
    cin  >> n >> m;
    for (int  i = 0; i < n-1; i++)
    {
        if (m[i]>m[i+1])
        {
            cout << "YES" << endl;
            cout << i +1 << " " << i +2;
            return 0;
        }
    }
    cout << "NO";

    return 0;
}