#include  <iostream>
#include  <vector>
#include  <algorithm>
#include  <map>

using namespace std;

int getFrequency(vector<int> vec) ;
int main() {
    vector<int> vec;
    int input;
    map<int, int> mp;
    cout << "Input :";
    for (int x = 0; x < 6; x++) {
        cin >> input;
        vec.push_back(input);
    }
    sort(vec.begin(),vec.end());



    for (int x : vec) {
        cout << x << " ";
    }
}
