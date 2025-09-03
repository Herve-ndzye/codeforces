 #include <iostream>
#include <vector>

using namespace std;
int main() {
    vector<tuple<int,int,double>> vec= {{5,1,0.0},{10,5,0.0},{15,5,0.0},{7,4,0.0},{8,1,0.0},{9,3,0.0},{4,2,0.0}};
    for (auto [a,b,c] : vec) {

    }

    return 0;
}