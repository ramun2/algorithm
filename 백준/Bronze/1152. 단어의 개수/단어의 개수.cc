#include <iostream>
#include <vector>
#include <string>
#include <cstring>
#include <sstream>
#include <cstdio>

using namespace std;

int main() {
        
        char s[1000001];
        scanf("%[^\n]c", s);
        int ans = 0;
        for(int i = 1; i < strlen(s) - 1; i++){
            if(s[i]==' '){
                ans++;
            }
        }
        if(strlen(s)<=1&&s[0]==' '){
            cout << 0;
            return 0;
        }
        cout<<ans+1;
    return 0;
}

