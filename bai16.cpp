#include <iostream>
#include <math.h>

using namespace std;

float Sum(int x){
    double sum(0.0); 

    for (int i = 1; i <= x; i++){
        sum += i;
    }
    return sum;
}

int main(){
    int x,n;

    cout << "x = "; cin >> x;
    double  sum(0.0);
    do{
        cout << "n = "; cin >> n;
        if(n < 0){
            cout << "N must be greater than 0. Please retype! \n";
        }
    }
    while(n < 0);

    for (int i = 1; i <= n; i++){
        sum += pow(x, i) / Sum(i);
    }
    cout << sum;
    return 0;
}