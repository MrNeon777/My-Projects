#include <iostream>
using namespace std;

int main()
{
    double length, delay, s_time, m_time;
    delay = 186000.0;

    cout << "Enter length between Earth and Mars: ";
    cin >> length;
    cout << "\n";

    s_time = length / delay;
    m_time = s_time / 60;

    cout << "Message will take " << s_time << " seconds or " << m_time << " minutes.\n";

    return 0;
}
