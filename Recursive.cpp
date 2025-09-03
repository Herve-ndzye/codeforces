#include <iostream>

using namespace std;
int printer(int a)
{
  if (a > 0)
  {
    cout << a<< endl;
    a--;
    return printer(a);
  }
  return 0;
}
int main()
{
  cout <<  printer(10);
    return 0;
}