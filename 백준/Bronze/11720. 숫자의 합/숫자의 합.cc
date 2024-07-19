#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main() {
        
        int N;
        string s;
        int sum = 0;
    
        cin >> N;
        cin >> s;
    
        for(int i=0; i<N; i++){
           
            sum += (int)s[i]- '0'; 
        }
          
            cout << sum ;    
    
    return 0;
}

