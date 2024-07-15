#include <iostream>

using namespace std;

int main(){
    int H,M,C,HH;
    cin >> H >> M >> C;
    if (H<23){
        if((M+C)>= 60){
            HH = (M+C)/60;
            if(H+HH > 23){
                cout << H+HH-24 << " "<<(M+C)-(60*HH);
            }
            else{
                cout << H+HH << " " << (M+C)-(60*HH);
            }
        }
        else if((M+C)<= 60){
            cout << H << " " << M+C;
        }
    }
    else{
        if((M+C)>= 60){
            HH = (M+C)/60;
            cout << (23+HH) % 24 << " " << (M+C)-(60*HH);
        }
        else if((M+C)< 60){
            cout << H << " " << C+M;
        }
    }

    return 0;
}
