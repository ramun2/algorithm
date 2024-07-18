#include <iostream>
#include <algorithm>

using namespace std;

int main() {

    int N ;
    int m = 0;
    
    
    cin >> N ;
    
    int A[1000001];

    for(int i=0; i<N; i++){
        cin >> A[i];
    }

    sort(A, A + N);
    
    cout  << A[0] << " "<< A[N-1]; 
    return 0;
}