#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
        
        string A;
        int second[] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
        
        cin >> A;

        int result = 0;
        for(int i=0; i<A.size(); i++){
            result += second[A[i]-'A'];
        }

        cout << result << endl;
        
        
    return 0;
}

