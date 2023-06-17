#include <iostream>
using namespace std;

int TinhTong(int n){
    long long sum(0);

    for (int i = 1; i <= n; i++){
        sum += i;
    }
    return sum;
}


int main(){
    int n;
    do{
        cout << "n = "; cin >> n;
        if(n < 0)
            cout << "N must be greater than 0. Please retype! \n";
    }
    while(n < 0);
    
    double sum;
    for (int i = 1; i <= n ; i++){
        sum += 1.0/TinhTong(i);
    }
    cout << sum;

    return 0;
}