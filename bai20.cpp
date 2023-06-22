#include <iostream>

using namespace std;

int main()
{
    int n;
    do
    {
        cout << "n = "; cin >> n;
        if (n <= 0)
            cout << "N must be greater than 0. Please retype!";        
    } while (n <= 0);

    cout << -n << " ";

    for (int i = (-n)/2; i < 0; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    for (int i = 1; i <= n/2; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
    cout << n;

    return 0;
}