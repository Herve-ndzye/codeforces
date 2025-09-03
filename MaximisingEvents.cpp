#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
  int main() {
    vector<tuple<int,int,char,bool>> vec = {{1,3,'A',false},{2,5,'B',false},{3,9,'C',false},{6,8,'D',false}};
    sort(vec.begin(),vec.end(),[]( auto a, auto b) {
      return get<2>(a) < get<2> (b) ;
    });
    for (int i = 0; i < 4; i++) {
      if ( get<1>(vec[i]) < get<1>(vec[i+1]) ) {
        get<3>(vec[i+1]) = true;
      }
    }
    cout << "Total events : 4" << endl;
    cout << "Events done :" << endl;

    for (auto [x,y,z,b] : vec) {
      if (b == false) {
        cout << z << endl;
      }
    }
    cout << "Overlapping events : " << endl;
    for (auto [x,y,z,b] : vec) {
      if (b == true) {
        cout << z << endl;
      }
    }

    return 0;
  }