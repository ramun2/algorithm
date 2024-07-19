#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int T;
    string S;

    cin >> T;

    for(int i=0; i<T; i++){
        cin >> S;
        cout << S.front() << S.back() << "\n" ;
    }
    
    return 0;
}

