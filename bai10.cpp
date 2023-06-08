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
    int x, n;

    cout << "x = "; cin >> x;
    cout << "n = "; cin >> n;
    cout << LuyThua(x, n);

    return 0;
}

