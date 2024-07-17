#include <iostream>

using namespace std;

int main() {
    
    int A;
    string sum ;
    cin >> A;
    for(int i=1; i<=A; i++){
            sum += "*";
            cout << sum << "\n" ;
        }
    return 0;
}