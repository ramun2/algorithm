#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    
    int N;
    double M = 0;
    double a,sum=0;
    double averge;

    cin >> N;

    double arr[N];

    for(int i=0; i<N; i++){
        cin >> a;
        arr[i] = a;
        if(M < arr[i]){
            M = arr[i];
        }
    }
    
    for(int i=0; i<N; i++){
        arr[i] = arr[i]/M*100;
        sum += arr[i];
    }
    
    averge = sum/(double)N;

    cout << averge;

    
    return 0;
}

//점수 최댓값:M, 모든 점수: 점수/M*100 
//시험 본 과목 개수:N, N<=1000

