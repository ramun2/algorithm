#include<bits/stdc++.h>
using namespace std;

bool cmp(int q,int p){
  return q < p;
}

int main(){
	int n,o;
	vector<int> v;
	
	cin >> n;
	
	for(int i=0; i<n; i++){
		cin >> o;
		v.push_back(o);
	}
	
	sort(v.begin(),v.end(),cmp);
	
	for(int i=0; i<n; i++){
		cout << v[i] << "\n";
	}
	
}
 