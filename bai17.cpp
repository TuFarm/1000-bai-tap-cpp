#include <iostream>
#include <math.h>

using namespace std;

float Factorial(int n)
{
    double factorial(1.0);

    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int main()
{
    int n, x;
    double sum(0);

    cout << "x = ";
    cin >> x;
    cout << "n = ";
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        sum += pow(x, i) / Factorial(i);
    }
    cout << sum;

    return 0;
}