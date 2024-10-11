#include<bits/stdc++.h>
using namespace std;

bool cmp(char q, char p){
    return q > p;
}

int main(){

    string s;
    int N;
    
    cin >> N;
    s = to_string(N);
    
    sort(s.begin(),s.end(),cmp);
    
    cout <<  s;
    
}