#include <iostream>

using namespace std;

int main(){
    int H,M;
    cin >> H >> M;

    if(H>=0 && M>=45)
        cout << H<< " " << M-45;
    else if(H>0 && M<45)
        cout << H-1 << " "<< 15+M;
    else if(H == 0 && M <45)
        cout << 23 << " " << 15+M;
    else 
        cout << "";

    return 0;
}
