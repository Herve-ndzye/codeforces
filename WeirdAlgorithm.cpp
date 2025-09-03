#include <iostream>
#include <set>
#include <stdio.h>

using namespace std;

int main(){
    set<char> st;
    char buffer[1001];
    for (int i = 0; i <= 1000; i++) {
        buffer[i] = ' ';
    }
    fgets(buffer,sizeof(buffer),stdin);
    int n=sizeof(buffer);


    for(int i = 0;i<n;i++) {
        if( buffer[i] >= 97 && buffer[i] <= 122){
            st.insert(buffer[i]);
        }
    }
    cout << st.size() << '\n';


    return 0;
}