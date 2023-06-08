#include <iostream>
using namespace std;

float TinhTong(int n){

    do{
        cout << "n = "; cin >> n;
        if(n < 1)
            cout << "Vui long nhap so lon hon hoac bang 1 \n";
    }
    while(n < 1);

    float Sum(0.0);
    for(float i = 1.0; i <= n; i++){
        Sum += i / (i + 1);
    }
    return Sum;
}

int main(){
    int n;
    cout << TinhTong(n);
    return 0;
}