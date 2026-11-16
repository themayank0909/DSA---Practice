#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << "enter a and b = ";
    cin >> a >> b;
    cout << a << " " << b << endl;

    a = (a + b) - (b = a);
    cout << a << " " << b << endl;
}
