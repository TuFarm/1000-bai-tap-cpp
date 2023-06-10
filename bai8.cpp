#include <iostream>
using namespace std;

double TinhTong(int n){

    do{
        cout << "n = "; cin >> n;
        if(n < 0)
            cout << "Vui long nhap so lon hon hoac bang 0 \n";
    }
    while(n < 0); 

    double Sum(0);
    for(float i = 0.0; i <= n; i++){ 
        Sum += ((2*i)+1) / ((2*i)+2);
    }
    return Sum;

}

int main(){ 
    int n;
    cout << TinhTong(n);
    return 0;
}