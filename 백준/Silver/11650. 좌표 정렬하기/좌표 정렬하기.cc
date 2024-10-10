#include<bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b){
	return a < b;
}
int main(){
	int n,f,s;
	vector<pair<int,int>> v;
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> f >> s;
		v.push_back({f,s});
	}
	sort(v.begin(),v.end(),cmp);
	
	for(int i=0; i<n; i++){
		cout << v[i].first << " " << v[i].second;
		cout << "\n";
	}
}
