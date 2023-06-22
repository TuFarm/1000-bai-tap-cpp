#include <iostream>

using namespace std;

int main()
{
    int n, dem(2);
    do
    {
        cout << "n = "; cin >> n;
        if (n <= 0)
            cout << "N must be greater than 0. Please retype!";        
    } while (n <= 0);


    for (int i = (-n)/2; i < 0; i++)
    {
        if (n % i == 0)
        {
            dem++;
        }
    }
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            dem++;
        }
    }
    cout << dem;

    return 0;
}