#include <iostream>
using namespace std;

int LuyThua(int x, int n){

    long int luyThua(1);
    while(n > 0){
        luyThua *= x;
        n--;
    }

    return luyThua;
}

int main(){
    int n, x;
    long long sum(0);

    cout << "x = "; cin >> x;
    cout << "n = "; cin >> n;

    while(n > 0){
        sum += LuyThua(x, n);
        n--;
    }
    cout << sum;

    return 0;
}