#include <bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    string m;
    cin >> n>> m;
    int length = n/4;
    char arr[]={'A','C','G','T'};
    if (n%4 == 0)
    {
        for (char a:arr)
        {
            int counter = count(m.begin(),m.end(),a);
           if (counter < length)
           {
               do
               {
                   if (find(m.begin(),m.end(),'?')== m.end())
                   {
                       cout<< "===";
                       return 0;
                   }
                   int pos = find(m.begin(),m.end(),'?')-m.begin();
                   if (pos)
                   {
                       m[pos]=a;
                   }
                   counter++;
               }
               while (counter >0);

           }
        }
    }else
    {
        cout << "===";
        return 0;
    }
cout << m;
    return 0;
}