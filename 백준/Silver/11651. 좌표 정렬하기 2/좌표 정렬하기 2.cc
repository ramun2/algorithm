#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> q, pair<int,int>p){
    if(q.second == p.second){
        return q.first < p.first;
    }
    return q.second < p.second;
}

int main(){
    int n,f,s;
    
    cin >> n;
    vector<pair<int, int>> v(n);
    
    for(int i=0; i<n; i++){
        cin >> f >> s;
        v[i] = {f,s};
        
    }
    sort(v.begin(),v.end(),cmp);
    for(int i=0; i<n; i++){
        cout <<v[i].first << " " << v[i].second << "\n";
    }
}