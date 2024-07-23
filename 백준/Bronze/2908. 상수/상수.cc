#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
        
        string A,B;
        int M;
        cin >> A >> B;
    
        reverse(A.begin(), A.end());
        reverse(B.begin(), B.end());

        if(A<B) cout << B ;
        else cout << A;
        
    return 0;
}

