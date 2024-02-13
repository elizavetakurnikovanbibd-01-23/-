#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float a, b, c, e, f, g, h;
    cout << "Enter the value of e, f, g, h: ";
    cin >> e, f, g, h;
    a = sqrt(pow(abs(e - 6 / f), 6) + g);
    b = sin(e) + pow(cos(h), 6);
    c = (66 * g) / (e * f - 6);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    return 0;
}
