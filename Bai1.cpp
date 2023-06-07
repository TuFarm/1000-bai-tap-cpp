#include <iostream>
using namespace std;

int main(){
    long Sum(0); int n;

    do {
        cout << "n = "; cin >> n;
        if(n < 1)
            cout << "Vui long nhap so lon hon hoac bang 1 \n";
    }
    while (n < 1);

    for (int i = 1; i <= n; i++)
    {
        Sum += i;
    }
    cout << Sum;
    return 0;  
}