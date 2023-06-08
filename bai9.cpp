#include <iostream>
using namespace std;

int GiaiThua(int n){

    do{
        cout << "n = "; cin >> n;
        if(n < 0)
            cout << "Vui long nhap n lon hon 0";
    }
    while (n < 0);
    
    int giaiThua(1);
    for (int i = 1; i <= n; i++){
        giaiThua *= i;
    }
    return giaiThua;
}

int main(){
    int n;
    cout << GiaiThua(n);
    return 0;
}