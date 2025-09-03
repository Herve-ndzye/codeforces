#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
    int N,M;
    vector<string> probs;
    vector<vector<int>> scores;
    vector<int> counts;
    cin >> N >> M;
    for (int i = 0; i < N; i++) {
        string m;
        cin >> m;
        probs.push_back(m);
    }
    for (int i = 0; i < M; i++) {
        vector<int> m;
       for (int j = 0; j < N; j++) {
           int n;
           cin >> n;
           m.push_back(n);
       }
        scores.push_back(m);
    }
    for (int i = 0; i < N; i++) {
        int count = 0;
        for (int j = 0; j < M; j++) {
            count += scores[j][i];
        }
        counts.push_back(count);
    }
    int index = max_element(counts.begin(), counts.end()) - counts.begin();
    cout << probs[index];
    return 0;
}