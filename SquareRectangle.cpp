#include <iostream>

using namespace std;
int main()
{
     int t;
    cin >> t;
    while (t--)
    {
        int a,b,c,d,e,f;
        cin >>a>>b>>c>>d>>e>>f;
        bool checker = false;
        if (a==b+d+f && a==c && a==e) checker=true;
        if (b==a+c+e && b==d && b==f) checker =  true;
        if (a==c+e && a==b+d && d==f) checker=true;
        if (b==d+f && b==a+c && e==c) checker =  true;
        if (checker)
        {
            cout << "Yes\n";
        }else
        {
            cout << "No\n";
        }
    }

    return 0;
}