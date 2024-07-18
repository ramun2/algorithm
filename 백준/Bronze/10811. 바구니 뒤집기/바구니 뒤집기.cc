#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int N,M;
    int i,j;

    cin >> N >>M;
    int arr[N+1] = {0,};

    for(int i=1; i<=N; i++){
        arr[i] = i;
    }

    for(int l=0; l<M; l++){
        cin >> i >> j;
        reverse(arr + i, arr + j+1);
    }

      for(int l=1; l<=N; l++){
        cout << arr[l] << " ";
    }
    
    return 0;
}
