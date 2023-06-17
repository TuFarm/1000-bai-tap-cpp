#include <iostream>
#include <math.h>

using namespace std;

double GiaiThua(int n)
{
    double giaiThua(1);

    for (int i = 1; i <= n; i++)
    {
        giaiThua *= i;
    }
    return giaiThua;
}

int main()
{
    int x, n; double Sum(1);

    do
    {
        cout << "x = "; cin >> x;
        cout << "n = "; cin >> n;

        if (n <= 0 or x <= 0)
            cout << "Please retype!";

    } while ((x <= 0) || (n <= 0));

    for (double i = 3.0; i <= (2*n) + 1; i += 2)
    {
        Sum += (pow(x, i)) / (GiaiThua(i));
    }

    cout << Sum + x;
    return 0;
}
 