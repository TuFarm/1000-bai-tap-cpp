#include <iostream>
using namespace std;

int LuyThuaChan(int x, int n){

    long int luyThua(1);
    while(n > 0){
        luyThua *= x;
        n --;
    }

    return luyThua;
}

int main(){
    int x, n;
    long long sum(0);

    cout << "x = "; cin >> x;
    cout << "n = "; cin >> n;
    int replaceN = (2*n) + 1;

    while(replaceN >= 1){
        sum += LuyThuaChan(x, replaceN);
        replaceN -= 2;
    }
    cout << sum;

    return 0;
}