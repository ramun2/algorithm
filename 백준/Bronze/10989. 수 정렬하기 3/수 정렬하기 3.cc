#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int N,a;
    cin >> N;
    vector <int> v(100001,0);

    for(int i=0; i<N; i++){
        cin >> a;
        v[a]++;
    }
    
    for(int i=1; i<10001; i++){
        for(int j=0; j<v[i]; j++)
        cout << i << "\n";
        
    }
    
}