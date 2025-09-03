#include <iostream>

using namespace std;
int main()
{
    int n;
    cin >> n;
    int divider = 5;
    int answer = 0;
    while ( n / divider != 0)
    {
        answer += n/divider;
        divider*= 5;
    }
cout << answer;
    return 0;
}