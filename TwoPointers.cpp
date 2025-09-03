# include <iostream>
# include <vector>

using namespace std;
int main () {
    int target;
    cin >> target;
    vector numbers={1,3,2,5,1,1,2,3};
    int i = 0;
    int p2 = 1;
    while( i != 7) {
        int sum = numbers[i] + numbers[p2];
        if ((sum < target) && p2 <= 7) {
            p2++;
        }else if (sum == target) {
            for (int x = i; x <= p2; x++) {
                cout << numbers[x] << " ";
            }
            cout << endl;
        }else if (sum > target) {

        }
    }
    return 0;
}