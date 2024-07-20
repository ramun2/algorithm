#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

int main() {
        
        string s;
        int arr[26];

        for(int i=0; i<26; i++){
            arr[i] = -1;
        }

        cin >> s;

        for(int i=0; i<s.length(); i++){
            if( s[i]-'a'<0) break;
            if( arr[s[i]-'a']==-1){
                arr[s[i]-'a'] = i;
            }
        }
        
        for(int i=0;i<26;i++){
            cout << arr[i] << " ";
        }
            
    
    return 0;
}
