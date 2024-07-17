#include <iostream>

using namespace std;

int main() {
    
    int A;
    cin >> A;

    for(int row=1; row<=A; row++){

        for(int i=0; i< A-row; i++){
            cout << " ";
        }

        for(int i=0; i < row; i++){
            cout << "*";
        }

        cout << "\n";
    }
    return 0;
}