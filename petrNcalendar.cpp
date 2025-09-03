#include <iostream>

using namespace std;
int main()
{
    int m,d;
    cin >> m>> d;
    int count = 1;
    int rem= 7-d + 1;
    if (m<=7)
    {
        if (m % 2 ==0)
        {
            if (m != 2)
            {
                count += (30-rem) /7;
                if (((30-rem)/7)*7 != (30-rem))
                {
                    count+=1;
                }
            } else
            {
                count+=(28-rem)/7;
                if (((28-rem)/7)*7 != (28-rem))
                {
                    count+=1;
                }
            }
        }else
        {
            count += (31-rem) /7;
            if (((31-rem)/7)*7 != (31-rem))
            {
                count+=1;
            }
        }
    }else
    {
        if (m % 2 ==0)
        {
                count += (31-rem) /7;
                if (((31-rem)/7)*7 != (31-rem))
                {
                    count+=1;
                }
        }else
        {
            count += (30-rem) /7;
            if (((30-rem)/7)*7 != (30-rem))
            {
                count+=1;
            }
        }
    }
cout << count;
    return 0;
}