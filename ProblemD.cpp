#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    vector<vector<char>> board;
    vector<vector<char>> columns;
    int checker = 1;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string m;
        cin >> m;
        board.push_back(vector<char>(m.begin(),m.end()));
    }
    for (int i = 0; i< n; i++) {
        vector<char> com;
        for (int j = 0; j < n; j++) {
            com.push_back(board[j][i]);
        }
       columns.push_back(com);

    }
    for (auto m:board) {
        int W = count(m.begin(),m.end(),'W');
        int B = count(m.begin(),m.end(),'B');
        if (W != B) {
            checker = 0;
            break;
        }
        for (int i = 0; i < n; i++) {
            char a =  m[i];
            if ( a == 'W') {
                if (m[i+1] == 'W' && m[i+2] == 'W') {
                    checker = 0;
                    break;
                }
            }
            if ( a == 'B') {
                if (m[i+1] == 'B' && m[i+2] == 'B') {
                    checker = 0;
                    break;
                }
            }
        }
        if (checker == 0) {
            break;
        }
    }
    for (auto m: columns) {
        int W = count(m.begin(),m.end(),'W');
        int B = count(m.begin(),m.end(),'B');
        if (W != B) {
            checker = 0;
            break;
        }
        for (int i = 0; i < n; i++) {
            char a =  m[i];
            if ( a == 'W') {
                if (m[i+1] == 'W' && m[i+2] == 'W') {
                    checker = 0;
                    break;
                }
            }
            if ( a == 'B') {
                if (m[i+1] == 'B' && m[i+2] == 'B') {
                    checker = 0;
                    break;
                }
            }
        }
        if (checker == 0) {
            break;
        }
    }
    cout << checker;
    return 0;
}