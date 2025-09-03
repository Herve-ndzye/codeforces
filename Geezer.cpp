#include <iostream>
#include <vector>

using namespace std;
int main(){
    vector<vector<int>>holder;
    int A,H;
    cin >> A >> H;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        vector<int>vec;
        for (int j = 0;j < 4; j++){
            int h;
            cin >> h;
            vec.push_back(h);

        }
        holder.push_back(vec);
    }
    return 0;
}
