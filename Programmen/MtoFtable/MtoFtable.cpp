#include <iostream>
using namespace std;

int main()
{
    long double n, m, f;
    int counter = 0;
    cin >> f;
    for (n = f; n <= 100; n++)
    {
        m = n / 3, 28084;
        cout << n << " meters are equal " << m << " feets.\n";
        counter++;
        if (counter == 10)
        {
            cout << "\n";
            counter = 0;
        }
    }
    return 0;
}