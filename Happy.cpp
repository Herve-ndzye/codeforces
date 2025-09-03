#include <iostream>
#include <vector>
using namespace std;
int main()
{
        string n, m;
    vector<char> answer;
    cin >> n >> m;
for (int x = 0; x < n.size(); x++)
{
    if (n[x] == m[x])
    {
      answer.push_back('0');
    }else
    {
        answer.push_back('1');
    }

}
    for (char i : answer)
    {
        cout << i;
    }
    return 0;
}