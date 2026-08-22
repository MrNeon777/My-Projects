#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    bool p, q;
    cin >> p;
    cin >> q;
    cout << p << " XOR " << q << " is equal " << ((p || q) && !(p && q));

    return 0;
}