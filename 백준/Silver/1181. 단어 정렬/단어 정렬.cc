#include<bits/stdc++.h>
using namespace std;

bool cmp(string q, string p ){
    if(q.size() == p.size()){
        return q < p;    
    }
    
    return q.size() < p.size();
}

int main(){
    
    int n;
    string s;
    
    cin >> n;
    vector<string> v(n);
    
    for(int i=0; i<n; i++){
        cin >> s;
        v[i] = s;
    }
    
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    sort(v.begin(), v.end(),cmp);
    
    n = v.size();
    for(int i=0; i<n; i++){
        
        cout << v[i] << "\n";
    }
}