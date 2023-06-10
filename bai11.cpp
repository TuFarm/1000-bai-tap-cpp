#include <iostream>
using namespace std;

int GiaiThua(int n){

    long int giaiThua(1);
    for (int i = 1; i <= n; i++)
    {
        giaiThua *= i;
    }
    return giaiThua;
}

int main(){

    int n;
    do{
        cout << "n = "; cin >> n;
        if(n < 1)
            cout << "The number must be greater than 1. Please retype! \n";
    }
    while(n < 1);

    long long sum(0); 
    while(n > 0){
        sum += GiaiThua(n);
        n--;
    }
    cout << sum;

    return 0;
}